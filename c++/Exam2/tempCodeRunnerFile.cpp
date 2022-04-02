#include <iostream>
using namespace std;
int main(){
    int areaSize,payArea,payMat,total,firstArea,secondArea,thirdArea;
    char materialQua;
    cout << "Enter area : ";
    cin >> areaSize;
    cout << "Enter type of the material : ";
    cin >> materialQua;
    if (areaSize >= 20 && areaSize <= 40){
        payArea = areaSize*200000;
        if (materialQua == 'B'){
            payMat = areaSize*5000;
        }
        if (materialQua == 'G'){
            payMat = areaSize*7500;
        }
         if (materialQua == 'P'){
            payMat = areaSize*15000;
        } else { 
            cout << "Error wrong material :";
        }
    total = payArea + payMat;
    }

    else if (areaSize >= 41 && areaSize <= 100){
            firstArea = 200000;
            secondArea = (areaSize-40)*3000;
            payArea = firstArea+secondArea;
                if (materialQua == 'B'){
                    payMat = areaSize*7500;
                }
                if (materialQua == 'G'){
                    payMat = areaSize*10000;
                }
                if (materialQua == 'P'){
                    payMat = areaSize*15000;
                }
    total = payArea + payMat;
    }

    else if (areaSize >= 101){
            firstArea = 200000;
            thirdArea = (areaSize-60)*150000;
        if (materialQua == 'B'){
            payMat = areaSize*15000;
        }
        if (materialQua == 'G'){
            payMat = areaSize*20000;
        }
         if (materialQua == 'P'){
            payMat = areaSize*20000;
        }
    total = payArea + payMat;

    }
    cout << "The house will cost " << total << " bath to build.";
}