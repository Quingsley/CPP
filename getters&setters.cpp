# include <iostream>
#include <cmath>
using namespace std;
 class Movies {
 private:
     string rating;
 public:
     string title;
     string director;
     Movies(string aTitle, string aDirector, string aRating){
            title = aTitle;
           director = aDirector;
           setRating(aRating);
     }


       void setRating(string aRating){
          if(aRating == "G" || aRating =="PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
            rating = aRating;
          } else {
              rating = "NR";
          }

      }
      string getRating(){
        return rating;
      }


 };
 int main()
 {
    Movies free_Guy("Free Guy", "Ryan Reynolds", "PG-13");
    free_Guy.setRating("Dog");
    cout << free_Guy.getRating();

    return 0;
 }

