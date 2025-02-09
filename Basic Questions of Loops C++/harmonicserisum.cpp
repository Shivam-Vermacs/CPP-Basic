#include<iostream>
using namespace std;

int main()
{
    double n,i,j=1,Sum=0;
    cout<<"Enter the nth value"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
        cout<<j<<"/"<<i<<"+"<<" ";
        Sum+=j/i;
        }
        if(i==n)
        {
            cout<<j<<"/"<<i<<endl;
        }
    }
    cout<<"The sum of the series upto 5 terms:"<<Sum<<endl;
}