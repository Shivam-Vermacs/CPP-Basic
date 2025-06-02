class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        // code here
        int size = arr.size();
        int max = arr[0];
        for (int i = 1; i < size; ++i)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int seclargest = -1;
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] > seclargest && arr[i] != max)
            {
                seclargest = arr[i];
            }
        }
        return seclargest;
    }
};