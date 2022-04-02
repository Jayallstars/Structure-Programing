#include <iostream>
using namespace std;
int main(){
    float salaryYear,result;
    cout << "Enter year salary : ";
    cin >> salaryYear;
    if ( salaryYear < 100000){
        result = salaryYear*0.05;
    }
    if ( salaryYear >= 100001 && salaryYear <= 500000){
        result = salaryYear*0.1;
    }
    if ( salaryYear >= 500001 && salaryYear <= 1000000){
        result = salaryYear*0.2;
    }
    if ( salaryYear >= 1000001 && salaryYear <= 4000000){
        result = salaryYear*0.3;
    }
    if (salaryYear >= 4000001){
        result = salaryYear*0.37;
    }
    cout << result;
    return 0;
}