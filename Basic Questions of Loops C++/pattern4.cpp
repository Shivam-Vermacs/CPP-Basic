#include<iostream>
using namespace std;

int main()
{
    int n,k=1;
    cout<<"enter no of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<< " "; 
        }
        
        for(int l=1;l<=i;l++)
        {
            cout<< k << " ";
            k++;

            
        }
        cout<<endl;
    }
    
}