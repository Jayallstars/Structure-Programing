#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your number : ";
    cin >> n;
    for (int i = 0; i <= n; i++){

        if ((i == 1 || i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0)
            && (i!=2 && i!=3 && i!=5 && i!=7)) {
                continue;

            }
        cout << i << endl;

    }
}