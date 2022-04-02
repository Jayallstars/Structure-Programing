/* Program 3_2 : computer eqation = X*X*X + 3*X -10 */
#include <iostream>
using namespace std;
int main(){
    float X;
    cout << "Enter value X :";
    cin >> X;
    float Result(0);
    Result = X*X*X+3*X-10;
    cout << "\nResult of X*X*X+3*X-10 =";
    cout << Result << endl;
    return (0);
}