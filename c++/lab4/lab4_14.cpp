#include <iostream>
#include <string>
using namespace std;
int main()
{
char Ch;
int Count = 0;
string Str;
cout << "Enter String : ";
while (cin >> Ch) {
Count++;
Str += Ch;
}
cout << "\nLength of string(" << Str << ") is ";
cout << Count << endl;
return(0);
}