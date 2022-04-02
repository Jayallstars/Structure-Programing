#include <iostream>
using namespace std;
int main(){
    float cost;
    float roomAmount,unit;
    cout << "Enter your room number : ";
    cin >> roomAmount;
    cout << "Enter your unit : ";
    cin >> unit;
    // 0-20
        cost = cost + 3.00*20;
        unit = unit - 20;
        // 21 -30
            cost = cost + 4.50*10;
            unit = unit - 10;
 
            // 31 >>
                cost = cost + 5.25*unit;
                unit = unit - 10;

            }
        }
    }
    cout << "Room " << roomAmount << " = " << cost << " bath ";
}