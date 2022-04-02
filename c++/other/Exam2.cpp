#include <iostream>
#include <cmath>
using namespace std;
void demo1(){
    int a,b,c;
    cout << "Enter number A : ";
    cin >> a;
    cout << "Enter number B : ";
    cin >> b;
    cout << "Enter number C : ";
    cin >> c;
    cout << "Answer of " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    float x = (-b + sqrt(b*b-4*a*c))/(2*a);
    float y = (-b - sqrt(b*b-4*a*c))/(2*a);
    cout << "Answer 1 = " << x << endl;
    cout << "Answer 1 = " << y << endl;
}
int main(){
    demo1();
    return 0;

}