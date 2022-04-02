#include <iostream>
using namespace std;
int main(){
    int price,limit,dayLast,dayPresent,day,day2;
    int exp = 365;
    cout << "Enter your price : ";
    cin >> price;
    cout << "Enter your financial amount : ";
    cin >> limit;
    cout << "Enter your last transaction date : ";
    cin >> dayLast;
    cout << "Enter your present date : ";
    cin >> dayPresent;
    day = dayPresent - dayLast;
    day2 = dayPresent - exp;
    if (limit - price < limit && day < 45 && day2 < exp ){
        cout << "This is a useable credit card !! ";
    } else {
        cout << "This card is fuck up !! ";
    }
    return 0;

}