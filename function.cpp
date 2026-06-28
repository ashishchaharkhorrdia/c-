//function in c++
#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int print(){
    cout<<"Hello World"<<endl;
    return 0;
}


int main(){
    int result = add(5, 10);
    cout << "The sum is: " << result << endl;
    print();



    return 0;
}