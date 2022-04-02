#include <iostream>
#include <string>
using namespace std;
void ParseName(string &FirstName, string &LastName, const string FullName);
int main() {
  string Name = "Stroustrup, Bjarne";
  string LastName, FirstName;
  ParseName(FirstName, LastName, Name);
  Name = FirstName + " " + LastName;
  cout << "Name : " << Name << endl;
  return (0);
}
void ParseName(string &FirstName, string &LastName, const string FullName) {
  int I = FullName.find(",");
  LastName = FullName.substr(0, I);
  FirstName = FullName.substr(I + 2, FullName.size());
}