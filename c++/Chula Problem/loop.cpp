#include <iostream>
using namespace std;
int main() 
{ 
    for(int i=9; i>=1; i=i-2) 
    { 
            for(int k=10-i; k>=0; k=k-2) 
            { 
                    cout <<""; 
            } 
            for(int j=1; j<=i; j++) 
            { 
                    cout <<"*"; 
            } 
            cout << endl; 
    }
} 