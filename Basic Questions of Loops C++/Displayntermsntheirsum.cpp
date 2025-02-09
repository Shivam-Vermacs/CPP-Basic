#include<iostream>
using namespace std;

int main()
{
    int i,n,s=0;
    cout<<"Enter the Value of the n"<<endl;
    cin>>n;
    cout<<"The Number upto "<<n<<"th terms are"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<endl;
        s=s+i;
    }
    cout<<"Sum of the Numbers Upto "<<n<<"th Terms are"<<s<<endl;
    return 0;
}