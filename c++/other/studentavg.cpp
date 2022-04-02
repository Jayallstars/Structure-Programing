// Kamolchai Suparojanee
// Kiattisak Niemhom
// Anuwit Srichaithat
#include <iostream>
using namespace std;
int main(){
    float studentAmount,studentScore,average,sum;
    float count = 0;
    short times = 1;
    cout << "Enter your student amount : ";
    cin >> studentAmount;
    // check while count less than score loop until count strong than score
    while (count < studentAmount){
         cout << "Enter your student score " << times <<" : " ;
         cin >> studentScore;
         // check while score less than 0 or strong than 5 reinput score
            while (studentScore < 0 || studentScore > 5){
                    cout << "Enter your student score " << times <<" : " ;
                    cin >> studentScore;
                 }
         sum += studentScore;
         times++;
         count++;
    }
    average = sum/count;
    cout << "This is Average : " << average;
    return 0;
}