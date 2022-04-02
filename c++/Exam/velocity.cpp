#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,e,f;
    float g,h;
    cout << "Enter start kilometer :";
    cin >> a;
    cout << "Enter end kilometer :";
    cin >> b;
    cout << "Enter time used(Hour minute second) " << endl;
    cout << "Hour :";
    cin >> c;
    cout << "Minute :";
    cin >> e;
    cout << "Second :";
    cin >> f;
    g = b-a;
    h = g/(((c*3600)+(e*60)+(f))/3600);
    cout << "Car traveled " << g << " kilometers in " << c << " hrs " << e << " min " << f << " sec. "<< endl;
    cout << "Average velocity was " << h << " kph";
    return 0;
}
