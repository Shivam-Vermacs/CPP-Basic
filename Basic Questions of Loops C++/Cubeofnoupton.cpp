#include<iostream>
using namespace std;

int main()
{
    int n,cube;
    cout<<"Enter the nth term"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cube=0;
        for(int j=i;j<=i;j++)
        {
        cube=i*i*i;
        cout<<"Number is: "<<i<<" and cube of "<<i<<" is: "<<cube<<endl;
        }


    }
}