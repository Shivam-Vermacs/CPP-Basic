 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int y=1,z=1;
  do
  {
      z*=y;
      y++;
      
  }while(y<=x);
  
  cout<<z;
  
  return 0;
}
