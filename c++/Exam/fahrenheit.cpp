#include <iostream>
using namespace std;
int main(){
    float c,f;
    cin >> c;
    cin >> f;
    c = (f-32)*5/9;
    f = (c*9/5)+32;
    cout << "This is F >> C :" << c << endl;
    cout << "This is C >> F :" << f << endl;
    return 0;

}