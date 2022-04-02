#include <iostream>
using namespace std;
int main(){
    bool A = false;
    bool B = true;
    bool C = true;
    bool D = true;
    bool R;
    R = C || !(A&&B) && (A||B) || !(A||C);
cout << R << endl;
}