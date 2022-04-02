#include <iostream>
using namespace std;
int main(){
        float a,x=1,count=1;
        cin >> a;
        while (count <= 4){
        x = (x + (a/x))/2;
        count++;
        }
        cout << x;
        return 0;
}