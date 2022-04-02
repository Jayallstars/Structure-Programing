#include <iostream>
using namespace std;
int main(){
    float price;
    cout << "Calculate Price Discount 10% : " << endl;
    cout << "Enter your price : ";
    cin >> price;
    float discount;
    discount = (price) * (0.1);
    price -= discount;
    cout << "Price after discount 10% : " << price << endl;
    return 0;

}