#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2;
    int count = 0;
    cout << "Enter first string" << endl;
    getline(cin, str1);
    cout << "Enter second string " << endl;
    getline(cin, str2);
    string srtstr1 = str1;
    string srtstr2 = str2;
    sort(srtstr1.begin(), srtstr1.end());
    sort(srtstr2.begin(), srtstr2.end());
    int length1 = srtstr1.length();
    int length2 = srtstr2.length();
    for (int x = 0; x < length1; x++)
    {
        if (srtstr1[x] == srtstr2[x])
        {
            count++;
        }
    }
    if (count == length1)
    {
        cout << "anagram strings" << endl;
    }
    else
    {
        cout << "Not anagram" << endl;
    }
    return 0;
}
