#include <iostream>
using namespace std;
int main ()
{
    cout << "Enter 4 integers: ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a<b)
    {
        if (b<c)
        {
            cout << a << b << c << endl;
        }
        else if (a<c)
        {
            cout << a << c << b << endl;
        }
        else cout << c << a << b << endl;
    }

    else if (b<c)
    {
        if (c<a)
        {
            cout << b << c << a << endl;
        }
        else if (b<a)
        {
            cout << b << a << c << endl;
        }
        else cout << a << b << c << endl;
    }

    else if (c<a)
    {
        if (a<b)
        {
            cout << c << a << b << endl;
        }
        else if (c<b)
        {
            cout << c << b << a << endl;
        }
        else cout << b << c << a << endl;
    }

    else 
    {
        cout << a << b << c << d;
    }
    return 0;
}