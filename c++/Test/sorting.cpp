#include <iostream>
using namespace std;
void max(int a, int b, int c, int d) {
  if (a > b && a > c && a > d){
    cout << a;
  }
  else if (b> a && b > c && b > d){
    cout << b;
  }
  else if (c > a && c > b && c > d){
    cout << c;
  } else {
    cout << d;
  }
}
int main() {
  int num1, num2, num3, num4;
  cout << "Program sorting number " << endl;
  cout << "------------------------" << endl;
  cout << "Enter number 1 : ";
  cin >> num1;
  cout << "Enter number 2 : ";
  cin >> num2;
  cout << "Enter number 3 : ";
  cin >> num3;
  cout << "Enter number 4 : ";
  cin >> num4;

  cout << "------------------------" << endl;
  // cout << "Original : " << num1 << num2 << num3 << num4 << endl;
  max(num1, num2, num3, num4);
  // cout << "Sorting number : " <<  << << << endl;
  return 0;
}
