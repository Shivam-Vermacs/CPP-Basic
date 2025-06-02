#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr)
    {
        int size = arr.size();
        sort(arr.begin(), arr.end());
        return arr[size - 1];
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {3, 5, 1, 8, 2};

        int result = sol.largest(arr);

    cout << "Largest element: " << result << endl;

    return 0;
}
