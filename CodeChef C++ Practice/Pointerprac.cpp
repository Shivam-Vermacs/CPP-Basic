#include <iostream>
using namespace std;

int main()
{
    int value1 = 5, value2 = 10;
    int *p1 = &value1, *p2 = &value2;
    cout << p1 << "     " << p2 << endl;
    int **dp1 = &p1;
    cout << dp1 << endl;
}
