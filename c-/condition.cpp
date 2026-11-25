//conditional statement
#include <iostream>
using namespace std;
int main() {
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >=18){
        cout<<"you are eligible for driving licence"<<endl;
    }else if(age ==17){
        cout<<"Please wait for one year to get driving licence"<<endl;
    
    }else{
        cout<<"APna ghar raho or so jao"<<endl;
    }

    return 0;
}