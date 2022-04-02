#include <iostream>
using namespace std;
void scan_line(char line[], int *pu, int *pl, int *pd, int *pw, int *po);
int main() {
  char line[80];
  int uppers, lowers, digits, whitespc, others;
  uppers = lowers = digits = whitespc = others = 0;
  cout << "\nEnter a line of text below :\n";
  cin.getline(line, 79);
  scan_line(line, &uppers, &lowers, &digits, &whitespc, &others);
  cout << "\nNumber of uppers character : " << uppers;
  cout << "\nNumber of lower character : " << lowers;
  cout << "\nNumber of digits : " << digits;
  cout << "\nNumber of whitespace character : " << whitespc;
  cout << "\nNumber of other character : " << others;
  cout << endl;
  return (0);
}
void scan_line(char line[], int *pu, int *pl, int *pd, int *pw, int *po) {
  int index = 0;
  char c;
  while ((c = line[index++]) != '\0') {
    if (isupper(c))
      ++*pu;
    else if (islower(c))
      ++*pl;
    else if (isdigit(c))
      ++*pd;
    else if (isspace(c))
      ++*pw;
    else
      ++*po;
  }
}