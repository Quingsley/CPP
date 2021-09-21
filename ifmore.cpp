# include <iostream>
using namespace std;

int Getmarks(int num1, int num2, int num3){
    int result;
   if(num1 >= num2 && num1 >= num3) {

        return num1;
    }else if(num2 >= num1 && num2 >= num3){

    result = num2;
    } else {
        result = num3;
    }

}
 int main()
 {
     cout << Getmarks(13, 67, 7);
    return 0;
 }
