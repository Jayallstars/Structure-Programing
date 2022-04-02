#include <iostream>
#include <string>
using namespace std;
int main(){
        int Paper = 1;
        int Scissor = 2;
        int Rock = 3;
        int player1 = 0;
        int player2 = 0;
        int count = 1;
        int win;
        int round = 1;
        while ((count <= 20 && player1 <= 14) || (count <= 20 && player2 <= 14)) {
        cout << "Paper = 1 : Scissor = 2 : Rock = 3" << " : Round " << round << endl;
        cout << "Player 1 : ";
        cin >> player1;
        cout << "Player 2 : ";
        cin >> player2;
        if (player1 == 1 && player2 == 3){
                cout << "The winner is player 1" << endl;
                player1 += 1;
                count++;
        }
        else if (player2 == 1 && player1 == 3){
                cout << "The winner is player 2" << endl;
                player2 += 1;
                count++;
                        
        }
        else if (player1 == 3 && player2 == 2){
                cout << "The winner is player 1" << endl;
                player1 += 1;
                count++;
        }
        else if (player2 == 3 && player1 == 2){
                cout << "The winner is player 2" << endl;
                player2 += 1;
                count++;
        }
        else if (player1 == 2 && player2 == 1){
                cout << "The winner is player 1" << endl;
                player1 += 1;
                count++;
        }
        else if (player2 == 2 && player1 == 1){
                cout << "The winner is player 2" << endl;
                player2 += 1;
                count++;
        }
        else if (player1 == 1 && player2 == 1){
                cout << "equal" << endl;
                count++;
        }
        else if (player1 == 2 && player2 == 2){
                cout << "equal" << endl;
                count++;
        }
        else if (player1 == 3 && player2 == 3){
                cout << "equal" << endl;
                count++;
        }
        round++;
        cout << player2 << endl;
        }
        if (player1 > player2){
                cout << "--------------------------" << endl;
                cout << "The winner is Player 1 !!!";
        } else {
                cout << "--------------------------" << endl;
                cout << "The winner is Player 2 !!!";
        }
        return 0;
        
}