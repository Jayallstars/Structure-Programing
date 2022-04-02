#include <iostream>
using namespace std;
int main() {
  int count = 5;
  int a[count];
  int i = 0;
  char grade[count];
  cout << "Calculate Grade Program " << endl;
  for (int i = 0; i < count; i++) {
    cout << "Enter Score Student << " << i + 1 << " : ";
    cin >> a[i];
  }
  cout << "Show Student Grade " << endl;
  for (int i = 0; i < count; i++) {
    if (a[i] >= 90) {
      grade[i] = 'A';
    } else if (a[i] >= 80) {
      grade[i] = 'B';
    } else if (a[i] >= 70) {
      grade[i] = 'C';
    } else if (a[i] >= 50) {
      grade[i] = 'D';
    } else if (a[i] >= 0) {
      grade[i] = 'F';
    }
    cout << "Student " << i+1 << endl;
    cout << "    Score " << a[i] << " Grade " << grade[i] << endl;
  }
}