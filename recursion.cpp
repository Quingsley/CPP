#include <iostream>
# include <cmath>
using namespace std;
int factorial(int);
int main()
{
    int num, fact;
    cout << " Enter a number: " << endl;
    cin >> num;
    fact = factorial(num);
    cout << "the factorial of " << num << " is " << fact << endl;
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
