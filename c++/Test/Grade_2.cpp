#include <iostream>
using namespace std;
int main(){
        int score,proJect,midTerm,final,totalScore,count=0;
        char err;
        char Grade;
        while (count < 3){
        cout << "Enter Project socre : ";
        cin >> proJect;
        cout << "Enter Midterm socre : ";
        cin >> midTerm;
        cout << "Enter Final socre : ";
        cin >> final;

        err = 'N';
        if (proJect > 20){
                cout << "Project score error " << endl;
                err = 'Y';  
        }
        if (midTerm > 30){
                cout << "Midterm score error " << endl;
                err = 'Y';
        }
        if (final > 50){
                cout << "Final score error " << endl;
                err = 'Y';
        }
        if (err == 'N') {
                totalScore = proJect+midTerm+final;
                if (totalScore >= 80){
                        Grade = 'A';
                }
                else if (totalScore >= 70 && totalScore <= 79){
                        Grade = 'B';
                }
                else if (totalScore >= 60 && totalScore <= 69){
                        Grade = 'C';
                }
                else if (totalScore >= 50 && totalScore <= 59){
                        Grade = 'D';
                }
                else if (totalScore >= 0 && totalScore <= 49){
                        Grade = 'F';
                }

        }
        cout << "Total Score : " << totalScore << endl;
        cout << "Grade : " << Grade << endl;
        cout << "-----------------------------------" << endl;
	Grade = 0;
	totalScore = 0;
	count++; 
        }
}