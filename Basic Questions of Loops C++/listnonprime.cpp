#include<iostream>
using namespace std;

int main()
{
    int n,i,j,count=0;
    cout<<"Enter the nth term"<<endl;
    cin>>n;
    cout<<" non prime no are ="<<endl;
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            count++;
        }
        }
        if(count>2)
    {
        cout<<i<<" ";
    }
        

    }
    
}