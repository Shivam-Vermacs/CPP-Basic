#include<iostream>
using namespace std;

int main()
{
    int n1,n,r=0;
    cout<<"enter the nth value"<<endl;
    cin>>n;
    for(int i=n;n!=0;n=n/10)
    {
        n1=n%10;
        r=(r*10)+n1;
        

    }
    cout<<r<<endl;
}