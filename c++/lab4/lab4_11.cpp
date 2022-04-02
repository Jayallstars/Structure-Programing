#include <iostream>
using namespace std;
int main()
{
    unsigned long Sum = 0L;
    int n, i = 1;
    cout << "Please enter value n to find sumation of n*n : ";
    cin >> n;
    do {
        Sum += i * i; //55
        i++; //6
    } while (i <= n); //6 false
    cout << "Sum = " << Sum << endl;
    return(0);
}