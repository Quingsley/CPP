#include <iostream>
#include <cmath>
using namespace std;
int perimeter(int,int);
int main()
{
    int x,y, sum;
    cout << "enter the length: \n";
    cin >> x;
    cout << "enter the width: \n";
    cin >> y;
    sum = perimeter(x,y);
    cout << "The perimeter is "<< sum << endl;
    return 0;

}
int perimeter(int l, int w)
{
    int P;
    P = 2*(l+ w);
    return P;
}

