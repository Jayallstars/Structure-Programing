#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter your score : ";
    cin >> a;
    if ( a > 50){
        cout << "You pass !";
    } else {
        cout << "You failed !";
    }
}