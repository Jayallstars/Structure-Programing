#include <iostream>
using namespace std;
int main() {
  int areaSize, payArea, payMat, total, firstArea, secondArea, thirdArea, size;
  char materialQua;
  cout << "Enter area : ";
  cin >> areaSize;
  cout << "Enter type of the material : ";
  cin >> materialQua;
  if (areaSize >= 20 && areaSize <= 40) {
    payArea = 200000;
    size = 's';
  }

  else if (areaSize >= 41 && areaSize <= 100) {
    payArea = 200000 + (areaSize - 40) * 3000;
    size = 'm'
  }

  else if (areaSize >= 101) {
    payArea = 200000 + 150000 + ((areaSize - 60) * 2000);
    size = 'l'
  }
  switch (materialQua) {
    case 's':
        payMat = areaSize * 5000;
    break;
    case 'm':

    break;

    case 'l':

    break;
  }
  cout << "The house will cost " << total << " bath to build.";
}
