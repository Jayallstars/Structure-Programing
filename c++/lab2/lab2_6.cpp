/* Program 2_5 : Illustrate different forms of floating-point constants that have the same value */
#include <iostream>
using namespace std;
int main()
{
    cout << 230.E+3 << endl;
    cout << 230E3 << endl;
    cout << 2300000.0 << endl;
    cout << 2.3e5 << endl;
    cout << 0.23E6 << endl;
    cout << .23e+6 << endl;
    return 0;

}