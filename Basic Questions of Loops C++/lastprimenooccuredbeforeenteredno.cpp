#include<iostream>
using namespace std;

int main()
{
    int count=0,num,i,j;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    for(i=num;i>=1;i--)
    { count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;

        }
        if(count==2)
        {
            break;
        }

    }
    cout<<"last prime no. is = "<<i<<endl;

}

