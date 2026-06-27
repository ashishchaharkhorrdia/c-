#include <iostream>
// We need to tell the compiler where 'cout' and 'endl' come from
using namespace std; 

int main() {
    // You don't strictly need to declare 'i' out here if you declare it in the loop,
    // but if you do, the loop can just use it. Let's look at the standard way:
    //int n;
    //cout<<"enter value ";
    //cin>>n;
    //for (int i = 1; i < 11; i++) {
       // cout << n<<"x" <<i<<"="<<n*i<< endl;
    //}
    string name;
    cout<<"enter your name ";
    cin>>name;
    for(int i=0; i<100;i++){
        cout<<i<<" "<<name<<endl;
    }

    return 0;
}
