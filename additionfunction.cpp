#include <iostream>
#include <cmath>
using namespace std;
int addition(int x, int y)
{
 int num1, num2,add;
 num1 = x;
 num2 = y;
 add = num1 + num2;
 return add;
}
int main()
{
    int var1, var2;
    cout << "Enter the first number: \n";
    cin >> var1;
    cout << "Enter the second number: \n";
    cin >> var2;
    int sum;
    sum = additon(var1, var2);
    cout << sum;


    return 0;
}
