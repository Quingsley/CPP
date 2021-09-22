# include <iostream>
#include <cmath>
using namespace std;
class Student {
public:
    string Name;
    string Major;
    double GPA;
    Student(string aName, string aMajor, double aGPA){
        Name = aName;
        Major = aMajor;
        GPA = aGPA;
    }
    //Object function
    bool HasHonors (){
        if(GPA  >= 3.5){
        return true;
        }else{
            return false;
        }

    }
};
 int main()
 {
    Student student1("Kevin", "Computer Science", 3.6);
    Student student2("Jim", "Medicine", 2.4);

    cout << student1.HasHonors();
    return 0;
 }
