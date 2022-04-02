#include <iostream>
using namespace std;
int main(){
        int day,month,year,totalDay,beginDay;
        cout << "Please enter day month and year : ";
        cin >> day >> month >> year;
        beginDay = 112513;
        //beginDay = (beginDay%1000000/100000) + ((beginDay%100000/10000)*30) + (beginDay%10000/1000) + (beginDay%1000/100) + (beginDay%100/10)+ (beginDay%10);
        totalDay = day - beginDay;
        cout << totalDay;

        //cout << "The difference is about " << << " days ";




}