#include<iostream>
using namespace std;

int main()
{
    int i,k=0,j=1,sum;
    cout<<k<<" "<<j<<" ";
    for(i=3;i<=10;i++)
    {
        sum=k+j;
        cout<<sum<<" ";
        k=j;
        j=sum;

    }
}