#include <iostream>
using namespace std;
void recArea(){
    double base, height;
    cout << "Rectangle Area Calculation Program : " << endl;
    cout << "Enter you base : ";
    cin >> base;
    cout << "Enter you height : ";
    cin >> height;
    double area = 0.5 * base * height;
    cout << "This is your area : " << area << endl;
}
int main(){
    recArea();
    return 0;
}