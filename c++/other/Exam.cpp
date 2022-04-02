#include <iostream>
using namespace std;
void demo1(){
    int x,y;
    cout << "Enter number1 : ";
    cin >> x;
    cout << "Enter number2 : ";
    cin >> y;
    cout << "Result of" << endl;
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    cout << x << " * " << y << " = " << x*y << endl;
    cout << x << " / " << y << " = " << x/y << endl;
    cout << x << " % " << y << " = " << x%y << endl;
}
int main(){
    demo1();
    return 0;
}