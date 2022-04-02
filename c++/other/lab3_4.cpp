/* Program 3_4 : Use increment and decrement operator */
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "Enter first number(A) : ";
    cin >> A;
    cout << "Enter second number(B) : ";
    cin >> B;
    cout << endl;
    cout << " Before A = " << A << endl;
    cout << " ++A = " << ++A << endl;
    cout << " After A = " << A << endl;
    cout << " Before A = " << A << endl;
    cout << " A++ = " << A++ << endl;
    cout << " After A = " << A << endl
         << endl;
    cout << " Before B = " << B << endl;
    cout << " --B = " << --B << endl;
    cout << " After B = " << B << endl;
    cout << " Before B = " << B << endl;
    cout << " B-- = " << B-- << endl;
    cout << " After B = " << B << endl;
    return 0;
}