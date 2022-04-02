#include <iostream>
#include <math.h>
using namespace std;
int main(){
        const double pi = 3.14159265358979323846;
        float a,b,c,area,radian,degree;
        cin >> a >> b >> degree;
        radian = degree * pi/180;
        area = (0.5*a*b)*(sin(radian));
        cout << area;
        return 0;

}