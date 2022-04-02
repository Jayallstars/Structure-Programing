#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter your number : ";
    cin >> number;
    if(number > 0){
        cout << "number is positive ";
    }
    if(number == 0){
        cout << "number is zero ";
    }
    if(number < 0){
        cout << "number is negative ";
    }
    return 0;
}