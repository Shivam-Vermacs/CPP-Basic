#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter a String" << endl;
    cin >> name;
    int len = name.length();
    string revname = "";
    for (int x = len - 1; x >= 0; x--)
    {
        revname = revname + name[x];
    }
    cout << "The Reversed String is =" << revname << endl;
    return 0;
}