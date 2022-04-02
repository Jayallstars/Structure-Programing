#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void randVotes(/* float votes,int chairmanAmount */);

int main() {
    int width = 7,count;
    int chairmanNumber;
    float votesNumber,notVotes;
    int chairmanVotes[] = {};
    const float numberOfRightStd = 500;
    cout << "Enter number student chairman : ";
    cin >> chairmanNumber;
    chairmanVotes[chairmanNumber];
    cout << "Number of right student : " << numberOfRightStd << endl;
    srand((unsigned int)time(0));
    votesNumber = (rand() % 500);
    cout << "Number of Votes : ";
    votesNumber = ((votesNumber * 100)/numberOfRightStd);
    cout << "= " << fixed << setprecision(1) << votesNumber << "%" << endl;
    cout << "Number of not Votes : ";
    notVotes = numberOfRightStd - votesNumber;
    notVotes = ((notVotes * 100)/numberOfRightStd);
    cout << "= " << fixed << setprecision(1) << notVotes << "%" << endl;

    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No.\tVotes\tPercent (%)" << endl;
    cout << "---------------------------" << endl;
    cout << "---------------------------" << endl;
    randVotes();
    return 0;

} 

void randVotes(/* float votes,int chairmanAmount */) {
      int votesNumber = 420;
      int random1;
      int chairmanVotes[100] = {};
      for (int i = 0; i <= 100; i++) {
           random1 = (rand() % votesNumber);
           chairmanVotes[i] = random1;
           votesNumber -= random1;
           }
      cout << chairmanVotes[0] << endl;
      cout << chairmanVotes[1] << endl;
      cout << chairmanVotes[2] << endl;
      cout << chairmanVotes[3] << endl;
}