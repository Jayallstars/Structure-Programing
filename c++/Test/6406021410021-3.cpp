/* Author : Kamolchai Suparojanee
   Date   : 3/9/2564
------------------------------ */
#include <iostream>
using namespace std;
int main(){
        int day,month,year,totalDay,beginDay,beginMonth,beginYear,totalMonth,totalYear,allDay;
        char check;
        do {
           cout << "Please enter day month and year : " ;
           cin >> day >> month >> year;
        }
        while ((day < 1 || day > 30) || (month < 1 || month > 12) || (year < 2513 || year > 2599));
        check = 'A';
        if (day < 1 || day > 30){
                cout << "Exceed the limit of day." << endl;
                check = 'B';
        }
        if (month < 1 || month > 12){
                cout << "Exceed the limit of month." << endl;
                check = 'B';
        }
        if (year < 2513 || year > 2599){
                check = 'B';
                cout << "Exceed the limit of year." << endl;
        }
        else if (check == 'A'){
                beginDay = 1;
                beginMonth = 1;
                beginYear = 2513;
                totalDay = day - beginDay;
                totalMonth = month - beginMonth;
                totalYear = year - beginYear;
                allDay = (totalDay) + (totalMonth*30) + (totalYear*360);      
                cout << "The difference is about " << allDay << " days. ";
        }
        return 0;
}