#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lowl, uppl;
    cout << "Enter lower limit: \n";
    cin >> lowl;
    cout << "Enter upper limit: \n";
    cin >> uppl;
    int arm;
    for(arm=lowl; arm <= uppl; arm++)
    {
        int sum = 0, temp, digit;
        temp = arm;
        while(temp > 0)
        {
           digit = temp % 10;
           sum = sum + (digit*digit*digit);
           temp = temp /10;
        }
        if(arm == sum)
        {
            cout << arm << endl;
        }
        else
        {
            continue;
        }

    }


}
