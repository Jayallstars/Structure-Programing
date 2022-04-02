#include <iostream>
using namespace std;
int main(){
    int A,B;
    cout << "Enter Value A and B :";
    cin >> A >> B;
    if (A == B) cout << "A and B values are equal" << endl;
    if (A > B) cout << "A values > B values" << endl;
    if (A < B) cout << "A values < B values" << endl;
    return 0;
}