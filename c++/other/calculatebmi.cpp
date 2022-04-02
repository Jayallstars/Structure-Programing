#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double weight;
    double height;
    cout << "Calculate your BMI" << endl;
    cout << "Enter your weight here :";
    cin >> weight;
    cout << "Enter your height :";
    cin >> height;
    cout << "This is your BMI :" << weight/pow(height/100, 2) << endl;  
    //cout << "This is your BMI : " << weight/(height * height) << endl;
    return 0;
}
