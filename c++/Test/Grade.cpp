#include <iostream>
using namespace std;
int main(){
        int score;
        cout << "Enter the number of your score : ";
        cin >> score;
        if (score >= 80){
                cout << "A" << endl;
        }
        else if (score >= 70 && score <= 79){
                cout << "B" << endl;
        }
        else if (score >= 60 && score <= 69){
                cout << "C" << endl;
        }
        else if (score >= 50 && score <= 59){
                cout << "D" << endl;
        }
        else if (score >= 0 && score <= 49){
                cout << "F" << endl;
        }
        cout << "-----------------------------------";
        return 0;
}