#include <iostream>
using namespace std;
int main(){
    int x,y,fish,tomato,fishLeft,tomatoLeft;
    cout << "Input fish : ";
    cin >> x;
    cout << "Input tomato :";
    cin >> y;
    fish = x/300;
    tomato = y/200;
    fishLeft = x-(fish*3);
    tomatoLeft = y-(tomato*3);
    if (fish<tomato){
        cout << fish << endl;
    }
    if (fish>tomato){
        cout << tomato << endl;
    }

}