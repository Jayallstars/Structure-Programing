#include <iostream>
using namespace std;
void demo1(){
    string name;
    cout << "Enter your name :";
    cin >> name;
    cout << name;
}
void demo2(){
    string name;
    cout << "Enter your name :";
    getline(cin, name);
    cout << name;
}
int main(){
    //demo1();
    demo2();
    return 0;
}