#include <iostream>
using namespace std;

// Recursive function
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;           // Base case
//     else
//         return n * factorial(n - 1); // Recursive call
// }

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n;
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}