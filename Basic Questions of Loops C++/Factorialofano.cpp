#include<iostream>
using namespace std;

int main()
{
    int num,product=1;
    cout<<"Enter the Number you want the factorial of "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        product*=i;
    }
    cout<<"Factorial of the Given Number = "<<product<<endl;
    return 0;
}