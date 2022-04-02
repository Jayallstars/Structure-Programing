#include <iostream>
using namespace std;
int main() {
  char Ch;
  string Message;
  cout << "Enter character : ";
  cin >> Ch;
  cout << endl;
  if ((Ch >= 48 && Ch <= 57) || (Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)) { // เช็คว่าเป็นตัวเลขหรือตัวอักษร T != 0, F = 0
    if ((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)) { // เช็คว่าตัวอักษร T != 0, F = 0
      if ((Ch >= 97 && Ch <= 122)) // เช็คว่าเป็นตัวอักษรเล็กไหม T != 0, F = 0
        Message = "lower character.";
      else
        Message = "upper character.";
    } else if ((Ch >= 48 && Ch <= 57)) // เช็คว่าเป็นตัวเลขไหม T != 0, F = 0
      Message = "digit.";
  } else
    Message = "special character.";
  cout << "\'" << Ch << "\'" << " is " << Message << endl;
  if ((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)) { // เช็คว่าตัวอักษร T != 0, F = 0
    if ((Ch >= 97 && Ch <= 122)) { // เช็คว่าเป็นตัวอักษรเล็กไหม T != 0, F = 0
      cout << "\'" << Ch << "\'"
           << " convert to upper \'";
      cout << (char)toupper(Ch) << "\'";
    } else {
      cout << "\'" << Ch << "\'"
           << " to lower \'";
      cout << (char)tolower(Ch) << "\'";
    }
    cout << endl;
  }
  return (0);
}