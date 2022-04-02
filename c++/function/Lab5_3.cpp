#include <iostream>
#include <math.h>
using namespace std;
int main() {
  double Value;
  cout << "Enter floating number : ";
  cin >> Value;
  cout << endl;
  cout << "\nCeiling of " << Value << " is " << ceil(Value);
  cout << "\nFloor of " << Value << " is " << floor(Value);
  cout << "\nSquare root of " << Value << " is " << sqrt(Value);
  cout << "\nExponential of " << Value << " is " << exp(Value);
  cout << "\nFloating absolute of " << Value << " is ";
  cout << fabs(Value);
  cout << "\nNatural logarithm of " << Value << " is ";
  cout << log(Value);
  cout << "\nLogarithm(10 base) of " << Value << " is ";
  cout << log10(Value);
  cout << "\nPower three of " << Value << " is ";
  cout << pow(Value, 3);
  cout << "\nSin of " << Value << " is " << sin(Value);
  cout << "\nCosine of " << Value << " is " << cos(Value);
  cout << "\nTangent of " << Value << " is " << tan(Value);
  cout << endl;
  return (0);
}