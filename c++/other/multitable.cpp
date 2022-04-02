#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "This is a Multiple Table : ";
    cin >> n;
    for(int i = 0;i <= 12;i++){
        cout << n << "x" << i <<  "=" << n*i << endl;
    }
    return 0;
}