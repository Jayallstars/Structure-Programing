#include <iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	cout << ((x/1000)*8)+((x%1000/100)*4)+((x%100/10)*2)+((x%10)*1); 

}