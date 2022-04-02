#include <iostream>
using namespace std;
int main(){
        int salary,hour,times;
        char late,ot;
        cout << "Enter Salary : ";
        cin >> salary;
        while ((late != 'Y' && late != 'y') && (late != 'N' && late != 'n')){
        cout << "Late (Y/N) : ";
        cin >> late;
        }
        cout << "Over Time Hour (Y/N) : ";
        cin >> ot;
        cout << "Enter OT Hour : ";
        cin >> hour;
        if (late == 'Y' || late == 'y'){
        }
        else if (late == 'N' || late == 'n'){
                salary += 1000;
        }
        if (ot == 'Y' || ot == 'y'){
                salary += 200 * hour;
        }
        cout << "Salary : " << salary;
}