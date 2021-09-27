#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int period,year;
    double principal=5000.00, inrate= 0.11, amount, value;
    year=0;
    period=10;
    amount=principal;
    while(year <= period)
    {
        cout <<  year << endl;
        cout <<  amount << endl;
        value = amount + (inrate * amount);
        year++;
        amount = value;


    }

}
