#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // char str[] = "Hello, World!";
    //  cout << strlen(str) << str << endl;
    // cout << str[3] << endl;
    char str[100];
    cout << "Enter a string: ";
    // take input in string
    cin.getline(str, 100);
    // cout << "You entered: " << str << endl;
    // output using loop
    /* for (char ch : str)
     {
         cout << ch;
     }
     cout << endl;*/
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    return 0;
}