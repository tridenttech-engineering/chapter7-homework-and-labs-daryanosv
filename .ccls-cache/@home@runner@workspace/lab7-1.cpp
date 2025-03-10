//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Darya> on <March 9>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day=0;
    int totalText=0;
    int dailyText=0;
    double average=0.0;

    for (day=1;day<8;day+=1)
    {
        cout << "Enter the number of text messages sent on day " << day << ": ";
        cin >> dailyText;
        totalText += dailyText;
    }
    average = static_cast<double>(totalText) / (day-1);
    cout << fixed << setprecision(0);
    cout << "Average number of text messages sent each day: " << average << endl;
    
    return 0;
}   //end of main function