# include <iostream>
#include <cmath>
using namespace std;

void sayHi(string name, int age);
 int main()
 {
   cout << "top" << endl;
   sayHi("Jerome", 20);
   sayHi("Frank", 45);
   sayHi("Kate", 26);

   cout << "bottom" << endl;
   return 0;
 }

 void sayHi(string name, int age) {
    cout << "Hello " << name << " , You are " << age << endl;

}


