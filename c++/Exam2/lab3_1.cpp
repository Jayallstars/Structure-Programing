#include<iostream>
using namespace std;
int main(){
    int killo = 0,price = 0,price1=0,price2=0,price3=0,price4=0;
    cin >> killo;
    if(killo >= 1){
        price = 40;
    }
    if(killo >= 2 ){
        if(killo <= 10){
            price1 = ((killo-1)*5);
        }else{
            price1 = 45;
        }
    }
    cout << killo <<"\n";
    cout << price <<"\n";
    if(killo >= 11 ){
        if(killo <= 15){
            price2 = ((killo-10)*4);
        }else{
            price2 = 20;
        }
    }
    if(killo >= 16 ){
        if(killo <= 20){
            price3 = ((killo-15)*3);
        }else{
            price3 = 15;
        }
    }
    if(killo >= 21){
        price4 = ((killo-20)*2);
    }
    cout << price1 <<"\n";
    cout << price2 <<"\n";
    cout << price3 <<"\n";
    cout << price4 <<"\n";
    cout << price+price1+price2+price3+price4;
}