// Kamolchai Suparojanee
// Kiattisak Niemhom
// Anuwit Srichaithat
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num1,num2,sum,result;
    cout << "Enter your number1 : ";
    cin >> num1;
    cout << "Enter your number2 : ";
    cin >> num2;
    // find digit != prime number from prim number solution
    for (int i = num1; i <= num2; i++){
        if ((i == 1 || i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0)
            && (i!=2 && i!=3 && i!=5 && i!=7)) {
                result = pow(i,2);
                sum += result;
                //when i = prime number continue next digit
                continue;   
            }
    }
    cout << sum;
    return 0;
}