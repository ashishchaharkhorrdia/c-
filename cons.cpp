//code for contants
#include<iostream>
using namespace std;
int main(){
    const int a =10;
    int b = 20;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    b=40;
    //a=30; we cannot change the value of a because it is a constant
    cout<<"value of a is: "<<a<<" "<<"value of b is : "<<b<<endl;


    return 0;
}
