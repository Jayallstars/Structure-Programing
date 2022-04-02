#include <iostream>
using namespace std;
int main(){
        int day = 0;
        int moneySnack = 0;
        int momMoney = 0;
        int count = 0;
        cout << "How much money has Dee got? ";
        cin >> momMoney;
        while (moneySnack < momMoney) {
                day += 1;
                moneySnack += day;
        }
        cout << "Dee can do this for "<< day << " days." << endl;
        cout << "Then she still has " << (momMoney+day) - moneySnack << " Baht" << endl;
}