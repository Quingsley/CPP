#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int num, temp, digit, rev;
    cout << "Enter a number: " << endl;
    cin >> num;
    temp = num;
    rev = 0;
    while(temp > 0)
    {
        digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp / 10;
    }
    if(rev == num)
    {
        cout << num << " is a palindrome number" << endl;
    }
    else
    {
        cout << num << " is not a palindrome number" << endl;
    }
    return 0;

}

