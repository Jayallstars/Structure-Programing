/* Program 3_5 : Use assignment operator */
#include <iostream>
using namespace std;
int main()
{
    int X = 10;
    cout << "X = " << X << endl;
    X += 1;
    cout << "X += 1; \tX = 10 + 1 = " << X << endl;
    X -= 1;
    cout << "X -= 1; \tX = 11 + 1 = " << X << endl;
    X *= 3;
    cout << "X *= 3; \tX = 10 * 3 = " << X << endl;
    X /= 3;
    cout << "X /= 3; \tX = 30 / 3 = " << X << endl;
    X %= 3;
    cout << "X %= 3; \tX = 10 % 3 = " << X << endl;
    return 0;
}