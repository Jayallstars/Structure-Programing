/*Author : Kamolchai Suparojanee
           27/8/2021 */
#include <iostream>
using namespace std;
int main(){
    float bookPrice,toyPrice,modelPrice,staPrice,payWeek=1000,pay,totalPrice;
    cout << "Input number of Books : ";
    cin >> bookPrice;
    cout << "Input number of Toys : ";
    cin >> toyPrice;
    cout << "Input number of Model : ";
    cin >> modelPrice;
    cout << "Input number of Stationery : ";
    cin >> staPrice;
    totalPrice = ((bookPrice*120) + (toyPrice*80) + (modelPrice*50) + (staPrice*15));
    if (totalPrice == 0) {
         pay = (payWeek - (payWeek*0.5));
    }
    else if (totalPrice >= 1 && totalPrice <= 4999) {
         pay = (payWeek - (totalPrice*0.1));
    }
    else if (totalPrice >= 5000 && totalPrice <= 9999) {
        pay = payWeek;

    }
    else if (totalPrice >= 10000 && totalPrice <= 99999) {
         pay = (payWeek + (totalPrice*0.05));
    }
    else if (totalPrice >= 100000) {
         pay = (payWeek + (totalPrice*0.1));
    }
    cout << "Payment = " << pay;
    return 0;
}