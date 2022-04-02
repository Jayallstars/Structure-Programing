#include <iostream>
using namespace std;
int main(){
    int num1,num2,j,is_prime,result,count,sum;
    cout << "Enter your number1 : ";
    cin >> num1;
    cout << "Enter your number2 : ";
    cin >> num2;

        for (num1 = 2; num1<=num2; num1++){
            is_prime = 0;
            count++;
            /* ให้ค่า j = n - 1 ถ้า i%j == 0,ค่า is_prime จะเท่ากับ = 0 เเละเเปลว่าไม่ใช่จำนวนเฉพาะ
            เมื่อ เงื่อนไข j<i เป็นเท็จเเล้วจึงออกไปเช็คค่า is_prime เมื่อ is_prime เท่ากับ 0 จะไม่เป็นจำนวนเฉพาะ เเละจะไป cout ค่า i */
            for (j=2; j<num1; j++)
                if (num1%j == 0)
                is_prime = 1;
            
            if (is_prime != 0){
                cout << num1;
            //  result += num1;
            } 
        }
}