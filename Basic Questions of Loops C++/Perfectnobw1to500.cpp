#include<iostream>
using namespace std;

int main()
{    int s;
    for(int i=1;i<=500;i++)
    { s=1;
      for(int j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
            s=s+j;
        }
        
      }  
      if(s==i)
      {
      cout<<s<<endl;
      }
      
    }
    
    return 0;
}