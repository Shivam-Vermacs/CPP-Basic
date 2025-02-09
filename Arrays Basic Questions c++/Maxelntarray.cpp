#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter 1st element of array"<<endl;
    cin>>a[0];
    int max=a[0];
    cout<<"Enter the value of array"<<endl;
    for(int i=1;i<n;i++)
    {
        
    cin>>a[i];
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    cout<<"max element in array :"<<max<<endl;

}