#include <ios>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
void random(int random1[4], int &votesNumber2);
int main()
{
    int random1[4];
    int votesNumber2 = 0;
    int totalVotes;
    int chairmanNumber;
    float percentVotesNumber,percentVotesNumber2, votesNumber = 0, notVotes, percentNotVote;
    const float numberOfRightStd = 500;
    cout << "Enter number student chairman : ";
    cin >> chairmanNumber;
    cout << "Number of right student : " << numberOfRightStd << endl;
    srand((unsigned int)time(0));
    votesNumber = (rand() % 500);
    votesNumber2 = votesNumber;
    percentVotesNumber2 = votesNumber;
    percentVotesNumber = ((votesNumber * 100) / numberOfRightStd);
    cout << "Number of Votes : " << votesNumber << " = " << fixed << setprecision(1) << percentVotesNumber << "%" << endl;
    notVotes = numberOfRightStd - votesNumber;
    percentNotVote = ((notVotes * 100) / numberOfRightStd);
    cout << "Number of not Votes : " << notVotes << " = " << percentNotVote << "%" << endl;
    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No.\tVotes\tPercent (%)" << endl;

    random(random1,votesNumber2);
    
    totalVotes = random1[4] + votesNumber2;
    cout << fixed << setprecision(2) << endl;
    cout << "1" << "\t" << random1[0] << "\t" << float(((random1[0] * 100)/percentVotesNumber2)) << "%" << endl;
    cout << "2" << "\t"<< random1[1] << "\t" << float(((random1[1] * 100)/percentVotesNumber2)) << "%" << endl;
    cout << "3" << "\t"<< random1[2] << "\t" << float(((random1[2] * 100)/percentVotesNumber2)) << "%" <<endl;
    cout << "4" << "\t"<< random1[3] << "\t" << float(((random1[3] * 100)/percentVotesNumber2)) << "%" << endl;
    cout << "5" << "\t"<< totalVotes << "\t" << float(((totalVotes * 100)/percentVotesNumber2)) << "%" << endl;
    cout << "---------------------------" << endl;
    cout << "Total\t" << percentVotesNumber2 << "\t" << ((percentVotesNumber2 * 100)/percentVotesNumber2) << "%" << endl;
    return 0;
}

void random(int random1[4], int &votesNumber2) {
    for (int i = 0; i < 5; i++) {
            random1[i] = ((rand()) % votesNumber2);
            votesNumber2 = votesNumber2 - random1[i];
    }
}