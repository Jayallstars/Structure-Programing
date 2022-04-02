#include <iostream>
#include <string>
using namespace std;
int main() {
  char Ch;
  string Message;
  cout << "Enter character : ";
  cin >> Ch;
  cout << endl;
  if (isalnum(Ch)) { // เช็คว่าเป็นตัวเลขหรือตัวอักษร T != 0, F = 0
    if (isalpha(Ch)) { // เช็คว่าตัวอักษร T != 0, F = 0
      if (islower(Ch)) // เช็คว่าเป็นตัวอักษรเล็กไหม T != 0, F = 0
        Message = "lower character.";
      else
        Message = "upper character.";
    } else if (isdigit(Ch)) // เช็คว่าเป็นตัวเลขไหม T != 0, F = 0
      Message = "digit.";
  } else
    Message = "special character.";
cout << "\'" << Ch << "\'" 
       << " is " << Message << endl;
  if (isalpha(Ch)) { // เช็คว่าตัวอักษร T != 0, F = 0
    if (islower(Ch)) { // เช็คว่าเป็นตัวอักษรเล็กไหม T != 0, F = 0
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