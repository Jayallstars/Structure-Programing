#include <iostream>
using namespace std;

/* bool isEven(int n){
    return n % 2 == 0;
} */

bool leapYear(int year){
    if (year % 4 == 0){
        return true;
    } else {
        return false;
    }
}
int main(){
    cout << boolalpha << leapYear(2016);
}