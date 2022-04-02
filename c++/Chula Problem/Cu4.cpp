#include <iostream>
using namespace std;
int main(){
        int a,b,c,d,huge=0,mid=0,heigh=0,small=0;
        cout << "Enter number 1 : ";
        cin >> a;
        cout << "Enter number 2 : ";
        cin >> b;
        cout << "Enter number 3 : ";
        cin >> c;
        cout << "Enter number 4 : ";
        cin >> d;
        if (a > b && a > c && a > d){
            huge = a;
                if (b > c && b > d){
                    mid = b;
                    if (c > d){
                        heigh = c;
                        small = d;
                    } else {
                       heigh = d;
                       small = c;     
                    }
                }
                else if (c > b && c > d){
                    mid = c;
                    if (b > d){
                        heigh = b;
                        small = d;
                    } else {
                       heigh = d;
                       small = b;     
                    }
                }
                else if (d > b && d > c){
                    mid = d;
                    if (b > c){
                        heigh = b;
                        small = c;
                    } else {
                       heigh = c;
                       small = b;     
                    }
                }
                        
        }
 
        else if (b > a && b > c && b > d){
                 huge = b;
                   if (a > c && a > d){
                         mid = a;
                        if (c > d){
                            heigh = c;
                            small = d;
                         } else {
                           heigh = d;
                           small = c;
                        }
                   }
                   else if (c > a && c > d){
                           mid = c;
                           if (a > d){
                              heigh = a;
                              small = d;
                           } else {
                              heigh = d;
                              small = a;
                           }

                   }
                   else if (d > a && d > c){
                           mid = d;
                           if (a > c){
                              heigh = a;
                              small = c;
                           } else {
                              heigh = c;
                              small = a;
                           }
                   }
        }

        else if (c > a && c > b && c > d){
                 huge = c;
                   if (a > b && a > d){
                         mid = a;
                        if (b > d){
                            heigh = b;
                            small = d;
                         } else {
                           heigh = d;
                           small = b;
                        }
                   }
                   else if (b > a && b > d){
                           mid = b;
                           if (a > d){
                                heigh = a;
                                small = d;
                           } else {
                                heigh = d;
                                small = a;
                           }
                   }
                   else if (d > b && d > a){
                           mid = d;
                           if (b > a){
                                heigh = b;
                                small = a;
                           } else {
                                heigh = a;
                                small = b;
                           }
                   }                
        }
        else if (d > a && d > b && d > c){
                 huge = d;
                   if (a > b && a > c){
                         mid = a;
                        if (b > c){
                            heigh = b;
                            small = c;
                         } else {
                           heigh = c;
                           small = b;
                        }
                   }
                   else if (b > a && b > c){
                           mid = b;
                           if (a > c){
                                heigh = a;
                                small = c;
                           } else {
                                heigh = c;
                                small = a;
                           }
                   }
                   else if (c > b && c > a){
                           mid = c;
                           if (b > a){
                                heigh = b;
                                small = a;
                           } else {
                                heigh = a;
                                small = b;
                           }
                   }
        }
        cout << huge << endl;
        cout << mid << endl;
        cout << heigh << endl;                    
        cout << small << endl;
        return 0;
}