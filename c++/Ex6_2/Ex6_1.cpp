#include <iostream>
using namespace std;
int main(){
    int temparature,count = 0;
    float avg,sum = 0;
     do {
         cout << "Enter your temperature : ";
         cin >> temparature;
         sum += temparature;
         count++;
     } while (temparature != 0);
     cout << avg;
     avg = sum/count-1;
}