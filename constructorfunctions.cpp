//BOOKS USING A CONSTRUCTOR
# include <iostream>
#include <cmath>
using namespace std;
class Book {
public:
    string title;
    string author;
    int pages;
    //Constructor
    Book(){
        title = "No title";
        author = "No author";
        pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }

};

 int main()
 {
     Book book1( "Dopel Ganger", "Tolkein", 600);

     Book book2("Object Oriented Programming", "E. Balagurusamy", 900 );
     Book book3;
     cout << book1.title << endl;
     cout << book1.author<< endl;
     cout << book1.pages<< endl;
     cout << "\nBook2 contents" << endl;
     cout << book2.title << endl;
     cout << book2.author << endl;
     cout << book2.pages << endl;
     cout << book3.title << endl;

      return 0;
  }
