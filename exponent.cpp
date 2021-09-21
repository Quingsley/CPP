# include <iostream>
#include <cmath>
using namespace std;

int power(int basenum, int pownum){
     int result = 1;
    for(int i=1; i < pownum; i++){
        result=result*basenum;
    }

    return result;
}
 int main()
 {
    cout << power(2,11);
    return 0;
 }

