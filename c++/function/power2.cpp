#include <iostream>
using namespace std;
int power2(int); /* function prototype */
int main() {
  int x = 1;
  while (x <= 10) {
    cout << power2(x) << endl; /* calling function */
    x += 1;
  }
  return (0);
}
int power2(int n) /* Definition Function */
{
  return (n * n);
}