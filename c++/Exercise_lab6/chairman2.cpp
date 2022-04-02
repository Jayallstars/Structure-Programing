#include <ios>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int votesNumber2,h,h2,h3,h4,h5;
    int storeh5;
    int sountang;
    int width = 7, count;
    int chairmanNumber;
    float percentVotesNumber, votesNumber, notVotes, percentNotVote,no5[4],sum,grajay;
    int chairmanVotes[] = {};
    const float numberOfRightStd = 500;
    cout << "Enter number student chairman : ";
    cin >> chairmanNumber;
    chairmanVotes[chairmanNumber];

    cout << "Number of right student : " << numberOfRightStd << endl;
    srand((unsigned int)time(0));
    votesNumber = (rand() % 500);

    do {
        percentVotesNumber = ((votesNumber * 100) / numberOfRightStd);
        cout << "Number of Votes : " << votesNumber << " = " << fixed << setprecision(1) << percentVotesNumber << "%" << endl;
        notVotes = numberOfRightStd - votesNumber;
        percentNotVote = ((notVotes * 100) / numberOfRightStd);
        cout << "Number of not Votes : " << notVotes << " = " << percentNotVote << "%" << endl;

        cout << "Result of election chairman" << endl;
        cout << "---------------------------" << endl;
        cout << "No.\tVotes\tPercent (%)" << endl;
        cout << "---------------------------" << endl;

        votesNumber2 = votesNumber;
        h = (rand() % votesNumber2 / 2);
        h2 = (rand() % votesNumber2 / 2);
        h3 = (rand() % votesNumber2 / 2);
        h4 = (rand() % votesNumber2 / 2);
        h5 = (rand() % votesNumber2 / 2);

        // array
        no5[0] = h;

        no5[1] = h2;

        no5[2] = h3;

        no5[3] = h4;

        no5[4] = h5;5

        sum = no5[0] + no5[1] + no5[2] + no5[3] + no5[4];

    } while ( no5[4] < 0);

// เงื่อนไข 1 sum > votesNumber2
    if (sum > votesNumber2)
    {
        grajay = sum - votesNumber2;
        no5[4] -= grajay;
        for (int i = 0; i <= 4; i++)
        {
            int count = 0;
            cout << fixed << setprecision(1)<< i + 1 << "\t" << no5[i] << "\t" << float(((no5[i] * 100)/votesNumber2)) << "%" << endl;
        }
        cout << "---------------------------" << endl;
        cout << "Total\t" << votesNumber2 << "\t" << "100%" << endl;
        //cout << "if sum > vote\n";
    }

// เงื่อนไข 2 sum > votesNumber2
    if (sum < votesNumber2)
    {
        grajay = votesNumber2 - sum;
        no5[4] += grajay;
        for (int i = 0; i <= 4; i++)
        {
            int count = 0;
            cout << fixed << setprecision(1)<< i + 1 << "\t" << no5[i] << "\t" << float(((no5[i] * 100)/votesNumber2)) << "%" << endl;
        }
        cout << "---------------------------" << endl;
        cout << "Total\t" << votesNumber2 << "\t" << "100%" << endl;
        //cout << "if sum < vote\n";
    
        //cout << grajay <<endl;
    }
    return (0);
}