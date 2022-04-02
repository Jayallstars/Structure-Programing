#include <iostream>
using namespace std;
int main(){
  int num = 5;
  int a[num];
  int b[num];
  char c[num];
  cout << "Input Data To Array : 1 " << endl;
  for (int i = 0; i < num; i++){
    cout << "Enter Number To Array" << "(" << i+1 << ") : ";
    cin >> a[i];
  }
  cout << "Inut Data To Array : 2 " << endl;
  for (int i = 0; i < num; i++){
    cout << "Enter Number To Array" << "(" << i+1 << ") : ";
    cin >> b[i];
  }
  cout << "Report" << endl;
  for (int i = 0; i < num; i++){
    if ((a[i] + b[i]) % 2 == 0){
      c[i] = 'E';
    } else {
      c[i] = 'O';
    }
    cout << a[i] << "+" << b[i] << "=" << a[i]+b[i] << "(" << c[i] << ")" << endl;
  }
  return 0;
}