#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char dest[50] = "Learning C++ is fun";
    char src[50] = " and easy";

    strcat(dest, src);
    
    cout << dest ;

    return 0;

}