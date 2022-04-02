#include <iostream>
using namespace std;
int main(){
    int leapyear,christYear;
    cout << "Enter your Christ Year :";
    cin >> christYear;
    if (christYear % 4 == 0 && christYear % 100 != 0){
        cout << "Year" << christYear << "is a leap year ";
    }
    else if (christYear % 100 == 0 && christYear % 400 == 0){
        cout << "Year" << christYear << "is a leap year ";
    } else {
        cout << "Year" << christYear << "is not a leap year ";
    }
    
    return 0;
}
