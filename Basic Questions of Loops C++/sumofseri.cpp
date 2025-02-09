#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    double a=1,n,s=0;
    cout<<"enter the no given by user"<<endl;
    cin>>n;
    for(double i=1;i<=n;i++)
    {
        s=s+a/pow(i,i);

    }
    cout<<"sum of series is"<<s<<endl;
    return 0;
}