//WORKING WITH PONTERS WHICH STORE THE ADDRESS IN THHE MEMORY
# include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    int age = 20;
    int *pAge = &age;
    double GPA = 3.5;
    double *pGPA =&GPA;
    string name= "Jerome";

    cout << "age " << &age << endl;//memory address
    cout << "GPA " << &GPA <<endl;
    cout << "Name " << &name << endl;
    cout << pAge << endl; //the memory address is same
    cout << *pGPA << endl; //dereferencing a pointer
    cout << &GPA << endl;
    return 0;
 }
