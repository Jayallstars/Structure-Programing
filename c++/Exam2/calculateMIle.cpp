#include <iostream>
using namespace std;
int main(){
    float petroleum,mile,mpg,lpk,kpl;
    cout << "Input petroleum used : ";
    cin >> petroleum;
    cout << "Input mileage : ";
    cin >> mile;
    mpg = mile/petroleum;
    // 1 miles/gallon = 2.825 litre/km
    lpk = 2.825/mpg;
    // 1 miles/gallon = 0.354006 km/liter
    kpl = mpg*0.354006;
    cout << "(1) Fuel economy = " << mpg << " Miles per gallon (MPG)" << endl;
    cout << "(2) The car will use " << lpk << " Liter per kilometer" << endl;
    cout << "(3) Fuel economy = " << kpl << " Kilometers per liter (km/l)" << endl;
    return 0;
}