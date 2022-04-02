#include <iostream>
using namespace std;
void sequnce(){
    int hrs;
    cout << " Enter your hours :";
    cin >> hrs;
    int day = hrs/24;
    int hour = hrs%24;
    cout << hrs << " hour " << " = " << day << " day " << hour << " hour ";
}
int main(){
    sequnce();
    return 0;
}