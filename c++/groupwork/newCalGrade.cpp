#include <iostream>
#include <string>
using namespace std;

template <class T>
T calGrade1(T total);
template <class T>
T calGrade2(T total);
template <class T>
T calGrade3(T total);

int main() {
    int total;
    int text;
    int score;
    cout << "1.Calgrade A/B/C/D/F " << endl;
    cout << "2.Calgrade 4/3.5/3/2.5/2/1.5/1 " << endl;
    cout << "3.Calgrade PASS/FAIL " << endl;
    cout << "(Choose your choice (1)(2)(3)) : " ;
    cin >> text;
    if (text == 1){
        cout << "Enter your total score : ";
        cin >> score;
        calGrade1<char>(score);
    }
    else if (text == 2) {
        cout << "Enter your total score : ";
        cin >> score;
        calGrade2<double>(score);
    }
    else if (text == 3){
        cout << "Enter your total score : ";
        cin >> score;
        calGrade3<char>(score);
    }
    return 0;
}

template <class T>
T calGrade1(T total){
    if (total >= 80){
        cout << "This is your grade : " << 'A';
    }
    else if (total >= 70) {
        cout << "This is your grade : " << 'B';
    }
    else if (total >= 60) {
        cout << "This is your grade : " << 'C';
    }
    else if (total >= 50) {
        cout << "This is your grade : " << 'D';
    }
    else {
        cout << "This is your grade : " << 'F';
    }
    return 0; 
}

template <class T>
T calGrade2(T total){
    if (total >= 80){
        cout << "This is your grade : " << 4; 
    }
    else if (total >= 75) {
        cout << "This is your grade : " << 3.5;
    }
    else if (total >= 70) {
        cout << "This is your grade : " << 3; 
   }
    else if (total >= 65) {
        cout << "This is your grade : " << 2.5;
    }
    else if (total >= 60) {
        cout << "This is your grade : " << 2;
    }
    else if (total >= 55) {
        cout << "This is your grade : " << 1.5;
    }
    else {
        cout << "This is your grade : " << 1;
    }
    return 0;
}

template <class T>
T calGrade3(T total){
    if (total >= 50) {
        cout <<"This is your grade : PASS ";
    }
    else {
        cout << "This is your grade : FAIL ";
    }
    return 0;
}

template <class T>
T calGrade4(T total){
    if (total >= 80){
        cout << "This is your grade : " << 'A';
    }
    else if (total >= 70) {
        cout << "This is your grade : " << 'B';
    }
    else if (total >= 60) {
        cout << "This is your grade : " << 'C';
    }
    else if (total >= 50) {
        cout << "This is your grade : " << 'D';
    }
    else {
        cout << "This is your grade : " << 'F';
    }
    return 0; 
}



