# include <iostream>
using namespace std;
int main()
{
    cout << "Giraffe Academy \n";
    cout << "Hello" << endl;
    string phrase = "Jerome";
    cout << phrase.length() << endl;
    phrase[0] = 'G';
    cout << phrase[0] << endl;
    cout << phrase.find("rome", 0) << endl;
    cout << phrase.substr(3, 3);

    return 0;
}
