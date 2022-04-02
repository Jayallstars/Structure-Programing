#include <iostream>
using namespace std;
int main(){
    int celamic,money,total,total1,total2,fishtank,priceafter;
    cin >> money;
    cin >> celamic;
    if (celamic == 100){
        total = 100000/100;
        total1 = total*13;
    }
    else if (celamic == 225){
        total = 100000/225;
        total1 = total*20;
    }
    else if (celamic == 400){
        total = 100000/400;
        total1 = total*46;
    }
    else if (celamic == 625){
        total = 100000/625;
        total1 = total*58;
    }
    else if (celamic == 900){
        total = 100000/900;
        total1 = total*85;
    }
    total2 = money - total1;
    if (total2 <= 888){
            fishtank = 0;
            priceafter = total2 - fishtank;
    }
    else if (total2 >= 888 && total2 <= 3774){
            fishtank = total2 / 222;
            priceafter = total2 - (fishtank * 222);     
    }
    else if (total2 >= 3553 && total2 <= 7524){
            fishtank = total2 / 209;
            priceafter = total2 - (fishtank * 209);    
    }
    else if (total2 >= 7252 && total2 <= 12544){
            fishtank = total2 / 196;
           priceafter = total2 - (fishtank * 196);    
    }
    else if (total2 >= 11570){
            fishtank = total2 / 178;
            priceafter = total2 - (fishtank * 178);   
    }
    cout << total << endl;
    cout << total1 << endl;
    cout << total2 << endl;
    cout << fishtank << endl;
    cout << priceafter << endl;
    return 0;
}