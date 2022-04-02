#include <iostream>
#include <string>
using namespace std;
int main(){
        int Paper = 1;
        int Scissor = 2;
        int Rock = 3;
        int player1;
        int player2;
        int count;
        int win;
        cout << "Paper = 1 : Scissor = 2 : Rock = 3" << endl;
        cout << "Player 1 : ";
        cin >> player1;
        cout << "Player 2 : ";
        cin >> player2;
        while (count <= 20) {
        if (player1 == 1 && player2 == 3){
                cout << "The winner is player 1";
                player1++;
                count++;
        else if (player2 == 1 && player1 == 3){
                cout << "The winner is player 2";
                        player2++;
                        count++;
                        
                }
        } 
        else if (player1 == 3 && player2 == 2){
                cout << "The winner is player 1";
                player1++;
                count++;
                if (player2 == 3 && player1 == 2){
                        cout << "The winner is player 2";
                        player2++;
                        count++;
                }
        }
        else if (player1 == 2 && player2 == 1){
                cout << "The winner is player 1";
                player1++;
                count++;
                if (player2 == 2 && player1 == 1){
                        cout << "The winner is player 2";
                        player2++;
                        count++;
                }
        }
        else if (player1 == 1 && player2 == 1){
                cout << "equal";
                count++;
        }
        else if (player1 == 2 && player2 == 2){
                cout << "equal";
                count++;
        }
        else if (player1 == 3 && player2 == 3){
                cout << "equal";
                count++;
        }
        }
        if (player1 >= 14){
                win = player1;
        } else {
                win = player2;
        }
        return 0;
        
}