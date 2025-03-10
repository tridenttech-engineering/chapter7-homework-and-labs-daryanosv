//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <Darya> on <march 9>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int years = 0;
    double sales = 0.0;
    const double GROWTH_RATE = 0.055;
    double annualIncrease = 0.0;

    cout<<"Enter current year's sales: ";
    cin>>sales;

    while (sales < 150000.0) {
        annualIncrease=sales*GROWTH_RATE;
        sales+=annualIncrease;
        years++;
    }
    cout<<"Sales will exceed $150k in "<<years<<" years with $"<<sales<< "in sales"<<endl;
    
    return 0;
} //end of main function
