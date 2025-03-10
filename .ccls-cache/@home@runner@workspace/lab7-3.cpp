//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day=1;
    int totalText=0;
    int dailyText=0;
    double average=0.0;

    while (day<8)
    {
        cout << "Enter the number of text messages sent on day " << day << ": ";
        cin >> dailyText;
        totalText += dailyText;
        day++;
    }
    average = static_cast<double>(totalText) / (day-1);
    cout << fixed << setprecision(0);
    cout << "Average number of text messages sent each day: " << average << endl;
    return 0;
}   //end of main function