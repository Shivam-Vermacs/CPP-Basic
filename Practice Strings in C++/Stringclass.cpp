#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declaring the string variable or making an object for the string
    string str;
    cout << "enter a string" << endl;
    // "cin>>str" can be used also but it will only read one word
    // getline works the same way as cin but instead of one word or one string it reads the whole string
    getline(cin, str);

    cout << str << "world"; // display the string
    return 0;
}
