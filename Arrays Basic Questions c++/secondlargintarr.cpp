#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int A[n];
    if(n<3)
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int first,second,third;
     third=first=second= INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>first)
        {
            third=second;
            second=first;
            first=A[i];
        }
        else if(A[i]>second)
        {
            third=second;
            second=A[i];

        }

        

    }
    cout<<"Second Largest no is : "<<second<<endl;
    return 0;
}