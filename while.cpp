//while looop

//printing number from 1 to 100

#include <iostream>
using namespace std;
int main(){
    int i;
    int end;
    string name;
    cout<<"Welcome to Chahar Education Point where you learn how to crash you code in C++"<<endl;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter the starting number: ";
    cin>>i;
    cout<<"Enter the ending number: ";
    cin>>end;
    while(i<=end){
        cout<<i<<" Hi "<<name<<endl;
        i++;
    }
    return 0;
}