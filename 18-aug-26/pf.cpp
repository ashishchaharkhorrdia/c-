#include <iostream>
using namespace std;
// for sum
double sum(double a, double b)
{
    double c = a + b;
    return c;
}
// min of 2
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{
    cout << sum(15.5, 10) << endl;
    cout << min(15, 10) << endl;
    return 0;
}