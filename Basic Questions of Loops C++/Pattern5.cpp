#include<iostream>
using namespace std;

int main()
{
    int n,l=1;
    cout<<"Enter the Number of Rows"<<endl;
    cin>>n;
    for(int j=1;j<=n;++j)
    
    {
        for(int i=1;i<=n-j;++i)
        
        {
            cout<< " ";
        }
        for(int k=1;k<=j;++k)
        {
            cout<< j << " ";
            
        }
        cout<<endl;
        
    }
}