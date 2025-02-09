#include<iostream>
using namespace std;

int main()
 {
    int rows, number = 1;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
     {
        // Print spaces
        for(int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }

        // Print numbers
        for(int k = 1; k <= i; k++) {
            cout << number << " ";
            number++;
        }

        cout << endl;
    }

    return 0;
}


