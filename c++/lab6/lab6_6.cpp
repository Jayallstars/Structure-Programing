#include <iomanip>
#include <iostream>

using namespace std;
void Sort(int temp[], const int max);
void Swap(int &n1, int &n2);
int main() {
  const int Max = 10;
  int Data[Max] = {50, 0, 44, 7, 3, 100, 12, 36, 72, 23};
  cout << "\nData before sort in array ...\n";
  for (int n = 0; n < Max; n++)
    cout << setw(5) << Data[n];
  cout << "\n\nStart Sort ...\n";
  Sort(Data, Max);
  cout << "\n\nEnd Sort ...\n";
  cout << "\nData after sort finish.\n";
  for (int n = 0; n < Max; n++)
    cout << setw(5) << Data[n];
  cout << "\n";
  return (0);
}
void Sort(int temp[], const int Max) {
  int i, j, n;
  for (i = 0; i < Max - 1; i++) { // 0 - 9
    n = i; // n = 1, i = 1
    for (j = i; j < Max; j++) // j = 1, j < 10
      if (temp[n] > temp[j]) // temp[1] > temp[1]
        n = j; // n = 0, j = 0
    if (n != i) // 0 != 0
      swap(temp[i], temp[n]);
    /* display for result of sorting */
    cout << "\n" << i + 1 << " : ";
    for (j = 0; j < Max; j++)
      cout << setw(5) << temp[j];
  }
}
void Swap(int &n1, int &n2) {
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}