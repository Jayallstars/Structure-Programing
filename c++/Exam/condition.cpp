#include <iostream>
using namespace std;
int main(){
    short x;
    cout << "Enter your number : ";
    cin >> x;
    if (x >= -1000 && x <= 1000 && x % 2 == 0){
        cout << "Freaking true";
    } else {
        cout << "Your bitch";
    }
    return 0;
}