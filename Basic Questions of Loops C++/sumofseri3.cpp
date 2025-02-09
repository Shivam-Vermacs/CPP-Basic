#include<iostream>
using namespace std;

int main()
{
    int n,s=0,i,a=0;
    cout<<"enter the nth value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a+=i;
        
        s+=a;
       

    }
    cout<<"sum of series is "<<s<<endl;
    return 0;
}