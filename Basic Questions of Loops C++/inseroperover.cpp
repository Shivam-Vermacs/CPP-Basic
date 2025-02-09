#include<iostream>
using namespace std;

class Complex 
{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream & operator<<(ostream &out,Complex &c1);
    
};
ostream & operator<<(ostream &out,Complex &c1)
{
    out<<c1.real<<c1.img;
    return out;
}
int main()
{
    Complex c1(3,5);
    cout<<c1;
}