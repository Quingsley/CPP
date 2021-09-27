#include <iostream>
#include <cmath>
using namespace std;
int swapping(int,int);
int main()
{
    int a= 8, b= 10;
    cout << "print formal values \n";
    cout << a << endl;
    cout << b << endl;
    cout << "swap the numbers \n";
    swapping(a, b);
    cout << "values after interchange \n";
    cout << a << endl;
    cout << b << endl;
    cout << "The values cannot interchange since it is pass by value!" << endl;
    return 0;
}
int swapping(int x, int y)
{
    int c,d;
    c=x;
    d=y;
    x=d;
    y=c;
    return x, y;
}

