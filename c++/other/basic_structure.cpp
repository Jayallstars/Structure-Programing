#include <iostream>
using namespace std;
void sequence() {
    int hrs;
    cout << "Program transform hrs to day & hrs :" << endl;
    cout << "Enter your hrs :";
    cin >> hrs;
    int day  = hrs/24;
    int hour  = hrs%24;
    cout << hrs << " hours = " << day << " days " << hour << " hours ";
}

int main(){
    sequence();
    return 0;
}
