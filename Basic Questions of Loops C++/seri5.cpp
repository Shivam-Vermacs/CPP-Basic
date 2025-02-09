#include<iostream>
using namespace std;

int main()
{
    long int n,sum=0,L=1;
    cout<<"Enter the nth term"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=L;
        L=L*10+1;
    }
    cout<<sum<<endl;
}