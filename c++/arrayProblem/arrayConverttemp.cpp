#include <iostream>
using namespace std;
int main() {
  int count = 10;
  float a[count];
  cout << "Celcius to Fahrenheit conversion " << endl;
  for (int i = 0; i < count; i++) {
    cout << "Enter Celcius "
         << "(" << i + 1 << ")"
         << " : ";
    cin >> a[i];
  }
  cout << "Report Celsius to Fahrenheit conversion " << endl;
  for (int i = 0; i < count; i++) {
    cout << a[i] << " C ------> " << (a[i] * 1.8) + 32 << "F" << endl;
  }

  return 0;
}
