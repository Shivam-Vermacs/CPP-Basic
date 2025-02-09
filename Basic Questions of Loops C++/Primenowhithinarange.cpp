#include<iostream>
using namespace std;

int main()
{
    int count;
    cout<<"Prime No.s whitin 1 to 100 range are"<<endl;
    for(int i=1;i<=100;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        cout<<i<<endl;

    }
    return 0;
}