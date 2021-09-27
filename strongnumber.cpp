#include <iostream>
#include <cmath>
using namespace std;
int factorial(int);
int main()
{
    int n, lowl, uppl, temp, digit, sum;
    cout << "enter lower limit: " << endl;
    cin >> lowl;
    cout << "enter upper limit: " << endl;
    cin >> uppl;
    lowl = n;

    for(n = lowl; n <= uppl; n++)
    {
      sum = 0;
     temp = n;
     while(temp > 0)
     {
         digit = temp % 10;
         sum = sum + factorial(digit);
         temp = temp / 10;
     }
     if(sum==n)
     {
         cout << n << endl;
     }
     else
     {
         continue;
     }
    }


    return 0;
}
int factorial(int num)
{
    int res = 1;
    if(num == 0)
    {
        return res;
    }
    else if(num == 1)
    {
       return res;
    }
    else
    {
        res = res * num * factorial(num - 1);
        return res;
    }
}

