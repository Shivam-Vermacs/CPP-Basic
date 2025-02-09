#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int N;
    cin >> N;
    int x = 1;
    while (x <= N) {
        cout << x * x << " ";
        x += 1;
    }
    
    return 0;
}
