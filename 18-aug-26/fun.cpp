#include <iostream>
using namespace std;
// for return a value
int value()
{
    cout << "Hello, World!" << endl;
    return 4;
}
void printhello()
{
    cout << "Hello, World!" << endl;
}
int main()
{
    cout << value() << endl;
    printhello();
    int val = value();
    cout << "The value is: " << val << endl;
    return 0;
}