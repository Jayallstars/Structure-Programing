#include <iostream>
using namespace std;

int a,b;
int compareEquality(a,b){
    if (a == b){
        return "equal";
    }
    return "not equal";
}

int main(){
    cout << compareEquality(10,10);
    return 0;
}