//BOOKS
# include <iostream>
#include <cmath>
using namespace std;
class Book {
public:
    string title;
    string author;
    int pages;

};

 int main()
 {
     Book book1;
     book1.title = "Dopel Ganger";
     book1.author = "Tolkein";
     book1.pages = 600;

     Book book2;
      book2.title = "Object Oriented Programming";
     book2.author = "E. Balagurusamy";
     book2.pages = 900;

     cout << book1.title << endl;
     cout << book1.author<< endl;
     cout << book1.pages<< endl;
     cout << "\nBook2 contents" << endl;
     cout << book2.title << endl;
     cout << book2.author << endl;
     cout << book2.pages << endl;

    return 0;
 }

