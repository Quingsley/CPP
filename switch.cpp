# include <iostream>
#include <cmath>
using namespace std;

string getdayofweek(int daynum){
    string dayname;

    switch(daynum){
    case 0:
        dayname = "Sunday";
        break;
    case 1:
        dayname = "Monday";
        break;
    case 2:
        dayname = "Tuesady";
        break;
    case 3:
        dayname = "Wednesday";
        break;
    case 4:
        dayname = "Thursday";
        break;
    case 5:
        dayname = "Friday";
        break;
    case 6:
        dayname = "Saturday";
        break;
    default:
        dayname = "Invalid day number";

    }
    return dayname;
}

 int main()
 {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << getdayofweek(num);
    return 0;
 }

