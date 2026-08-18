// cal; by refrance
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    a = a + 10;
    b = b + 10;
    return a + b;
}

int main()
{
    cout << sum(10, 20) << endl;
    return 0;
}