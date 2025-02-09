#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	int x=0;
	while(N>0)
	{
	    N=N/10;
	    x++;
	}
	cout<<x<<endl;
return 0;
}
