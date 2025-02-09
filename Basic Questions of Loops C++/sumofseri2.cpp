#include<iostream>
using namespace std;

int main()
{
    int n,s=0,i;
    cout<<"enter the nth term"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    cout<<"sum of series is "<<s<<endl;
    return 0;
    
}