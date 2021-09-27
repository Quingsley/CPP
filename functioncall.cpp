#include <iostream>
#include <cmath>
using namespace std;
void Country(string nation1);
void Country1(string nation2);
int main()
{
    string nation1, nation2;
    cout << "I'm in main \n";
    Country(nation1);
    Country1(nation2);
   return 0;

}
void Country( string nation1)
{
    cout << "I'm in Tokyo" << endl;

}
void Country1( string nation2)
{
    cout << "I'm in Brazil" << endl;
}
