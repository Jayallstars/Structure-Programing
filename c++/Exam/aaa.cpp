#include <iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	cout << x/1000 << "\t";
	cout << x%1000/100 << "\t";
	cout << x%100/10 << "\t";
	cout << x%10 << "\t";

}