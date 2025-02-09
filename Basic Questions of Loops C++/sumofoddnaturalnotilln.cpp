#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the Nth term"<<endl;
    cin>>n;
    for(i=1;i<=n*2;i=i=i+2)
    {
       cout<<i<<" ";
        sum+=i;
    }
    cout<<sum<<endl;

}