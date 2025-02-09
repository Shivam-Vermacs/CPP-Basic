#include<iostream>
using namespace std;

int main()
{
    int n,j,i;
    cout<<"Enter the nth value"<<endl;
    cin>>n;
     for( i=1;i<=10;i++) //didnt print any message ignore that also output is direct
     {
        for(j=1;j<=n;j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
     }

}