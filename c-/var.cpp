//local or globale variable 
#include<iostream>
using namespace std;
int x = 10; //global 
//if we dont assign value it take 0
int main(){

    int y = 20; //local variable
    //value is not assign it take garbage value
    cout<<"value of x is: "<<x<<endl;
    cout<<"value of y is: "<<y<<endl;
    return 0;
}



//local variable is inside the block of code but globle var iis declear out side of masin fxn and we can access it from any where in prog.