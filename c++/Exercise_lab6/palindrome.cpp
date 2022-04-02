#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;

void isPalindrome(char number[]);
int main() {
  int j;
  char text[100] = {};
  cout << "Enter your text : ";
  cin >> text;
  j = strlen(text) - 1;
   for (int i = 0; i <= strlen(text)-1; i++) {
          cout << text[i] << " = "  << text[j] << endl;
          j--;
   }
  isPalindrome(text);
  return 0;
}

void isPalindrome(char number[]) {
  bool flag = true;
  int j = (strlen(number) - 1);
  for (int i = 0; i <= j; i++) {
    if (number[i] != number[j]) {
      flag = false;
    }
    j--;
  }
  if (flag == false) {
    cout << "This is not palindrome text " << endl;
  } else {
    cout << "This is palindrome text ";
  }
}