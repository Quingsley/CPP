# include <iostream>
#include <cmath>
using namespace std;
class Chef{
public:
    void makeschicken(){
        cout << "The chef makes chicken" << endl;
        }
    void makesbeefstew(){
        cout << "The chef makes Beef Stew" << endl;
        }
    void makesspecialdish(){
        cout << "The chef makes bbq ribs" << endl;
        }

};
class Italianchef: public Chef{
    public:
        void makesspecialdish(){
            cout << "The chef makes Chicken parm" << endl;
            }

};
 int main()
 {
     Chef chef;
     chef.makesspecialdish();
     Italianchef italianchef;
     italianchef.makesspecialdish();
    return 0;
 }


