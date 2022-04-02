#include <iomanip>
#include <iostream>
#include <time.h>

using namespace std;
void Gen_Number(int *x, int n);
void Reorder(int *x, int n);
int main() {
  int i, n, *x;
  cout << "\nHow many numbers will be entered ? ";
  cin >> n;
  /* Allocate Memory */
  x = new int[n];
  Gen_Number(x, n); /* generate data number by random */
  cout << "\n\nBefore sort of array:\n";
  for (i = 0; i < n; i++) {
    cout << "\ni = " << setw(2) << i << " *(x+i) = ";
    cout << setw(2) << *(x + i) << " x[i] = " << setw(2) << x[i];
  }
  /* reorder all array elements */
  Reorder(x, n);
  cout << "\n\nReordered list of numbers:\n";
  for (i = 0; i < n; i++) {
    cout << "\ni = " << setw(2) << i << " *(x+i) = ";
    cout << setw(2) << *(x + i) << " x[i] = " << setw(2) << x[i];
  }
  cout << endl;
  delete[] x;
  return (0);
}
void Gen_Number(int *x, int n) {
  int i;
  srand(time(0));
  for (i = 0; i < n; i++)
    x[i] = rand() % 100;
}
void Reorder(int *x, int n) {
  int i, item, temp;
  for (item = 0; item < n - 1; ++item) {
    for (i = item + 1; i < n; i++)
      if (*(x + i) < *(x + item)) {
        temp = *(x + item);
        *(x + item) = *(x + i);
        *(x + i) = temp;
      }
  }
}