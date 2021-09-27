#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i=0, f=0, s=1, n=0;
    for(i=0; i<10; i++)
    {
        if(i <= 1)
        {
            n=i;
            cout << n << endl;
        }
        else
        {
           n=f+s;
           f=s;
           s=n;

           cout << n << endl;
        }
    }
    return 0;
}
