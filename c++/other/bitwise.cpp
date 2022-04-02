#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Enter number 3: ";
    cin >> c;
    float Average;
    Average = static_cast<char>(a+b+c)/3;
    cout << Average;
    cout << type_info(Average);
    return 0;
}