#include <iostream>
using namespace std;
int main() {
  float A[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
  float *ptr;
  ptr = A;
  cout << "\nStart address of array A = " << A;
  cout << "\nEnd address of array A = " << A + 9 << endl;
  for (int i = 0; i < 10; i++) {
    cout << "\n i = " << i << " A[i] = " << A[i];
    cout << " *(ptr+i) = " << *(ptr + i);
    cout << " &A[i] = " << &A[i] << " ptr+i = " << ptr + i << endl;
  }
  return (0);
}