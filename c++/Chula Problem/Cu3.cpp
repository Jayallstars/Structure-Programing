#include <iostream>
using namespace std;
int a;
void isbn(){
        a = ((a/100000000)*10)+((a%100000000/10000000)*9)+((a%10000000/1000000)*8)+((a%1000000/100000)*7)+((a%100000/10000)*6)+((a%10000/1000)*5)+((a%1000/100)*4)+((a%100/10)*3)+((a%10)*2);
        for (int x = 0; x <= a; x++){
                if ((a+x)%11 == 0){
                        cout << x;
                        break;
        }
        }
        }
int main(){
        cin >> a;
        cout << a/100000000;
        cout << a%100000000/10000000;
        cout << a%10000000/1000000;
        cout << a%1000000/100000;
        cout << a%100000/10000;
        cout << a%10000/1000;
        cout << a%1000/100;
        cout << a%100/10;
        cout << a%10;
        isbn();
        return 0;
}