/* Program 4_2 : Use if-else statement */
#include <iostream>
using namespace std;
int main(){
    int year,maxday;
    cout << "\nEnter year : ";
    cint >> year;
    if ((year % 4) == 0)
        cout << "In" << year << "is leap year";
        maxday = 29;
    else {
        cout << "In" << year << "is not leap year";
        maxday = 28;
    }
    cout << "and February has" << maxday << "day.\n";
    return 0;
}
