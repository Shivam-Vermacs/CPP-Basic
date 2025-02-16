#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X, Y;
        cin >> X >> Y;
        long long ratingNeeded = Y - X;
        long long rate = (ratingNeeded / 8);
        if (ratingNeeded % 8 > 0)
        {
            cout << ++rate << endl;
        }
        else
            cout << rate << endl;
    }
}
