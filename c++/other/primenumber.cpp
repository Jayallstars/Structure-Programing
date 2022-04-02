#include <iostream>
using namespace std;
int main(){
    int n,i,j,is_prime;
    cout << "Enter your number : ";
    cin >> n;
    
    for (i=2; i<=n; i++){
        is_prime = 1;
        /* ให้ค่า j = n - 1 ถ้า i%j == 0,ค่า is_prime จะเท่ากับ = 0 เเละเเปลว่าไม่ใช่จำนวนเฉพาะ
         เมื่อ เงื่อนไข j<i เป็นเท็จเเล้วจึงออกไปเช็คค่า is_prime เมื่อ is_prime เท่ากับ 0 จะไม่เป็นจำนวนเฉพาะ เเละจะไป cout ค่า i */
        for (j=2; j<i; j++)
            if (i%j == 0)
            is_prime = 0;
        
        if (is_prime != 0)
            cout << i << endl;
    }
    return 0;
}