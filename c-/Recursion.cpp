/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int fac(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n * fac(n-1);
    }
    
}

int main()
{
    int num=4;
    cout<<fac(num);


    return 0;
}
