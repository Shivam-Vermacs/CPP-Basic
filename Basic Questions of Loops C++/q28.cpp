#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    for(i=101;i<200;i++)
    {
        if(i%9==0)
        {
            cout<<i<<" ";
            sum+=i;
            
        }
    }
    cout<<endl;
        cout<<sum;
}