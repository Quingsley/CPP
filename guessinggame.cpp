# include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    int secretnum = 7;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outofguess= false;

    while(secretnum != guess && !outofguess){
        if(guesscount < guesslimit){
         cout << "Enter guess: ";
        cin >> guess;
        guesscount++;
        } else {
            outofguess=true;
        }

    }
    if(outofguess){
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }

    return 0;
 }

