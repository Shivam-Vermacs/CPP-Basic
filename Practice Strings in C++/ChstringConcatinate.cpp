#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //initialising two strings through char array
    char str1[] = "ello ";

    char str2[] = "World";

    char str3[] = "Hello";

    //finding length of both string and printing them
    cout << "Length of 1st String = " << strlen(str1) << endl
         << "Length of 2nd String = " << strlen(str2) << endl;

         //Concatinate the two strings
    cout<<"After Concatination, the String is = "<< strcat(str1, str2)<<endl;
    
    //Checking if the two strings are same
    if(strstr(str1 , str3))
    {
        cout << "found the string Hello " << endl;
    }
    else
        cout << "not found" << endl;

        if(strchr(str1,'H'))
        {
            cout << "found H" << endl;
        }
        else
            cout << "not found H";

            
}