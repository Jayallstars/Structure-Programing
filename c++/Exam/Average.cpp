#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,e;
    cout << "Average Calculation Program : " << endl;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << "Enter your third number : ";
    cin >> c;
    cout << "Enter your fourth number : ";
    cin >> d;
    cout << "Enter your fifth number : ";
    cin >> e;
    float average;
    average = (a+b+c+d+e)/5;
    cout << "This is yor average " << average << endl;
    return 0;
}