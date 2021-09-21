# include <iostream>

using namespace std;
 int main()
 {
    bool is_male = false;
    bool is_tall = true;
    if(is_male && is_tall){
        cout << "You are a tall male";
    } else if(is_male && !is_tall){
     cout << "You are a short male";
    } else if (!is_male && is_tall) {
        cout << "You are tall but not male";
    }
     else {
    cout << "You are not male and not tall";
    }
    return 0;
 }

