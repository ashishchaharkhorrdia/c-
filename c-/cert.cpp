//this is a programm to make a certificate test using user data 
#include<iostream>
#include<string>
using namespace std;
int main(){
// we need to take some info from user
    string name;
    string course;
    string date;
    int age;
    string grade;
    string gender;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"ENter Your Age: ";       
    cin>>age;
    cout<<"Enter Your Course: ";
    cin>>course;
    cout<<"Enter The Date: ";
    cin>>date;
    cout<<"Enter Your Grade: ";
    cin>>grade;
    cout<<"Enter Your Gender: ";
    cin>>gender;    

    cout<<"This is to certify that "<<name<<" of age "<<age<<" has successfully completed the course "<<course<<" on "<<date<<". The student has achieved a grade of "<<grade<<" and identifies as "<<gender<<"."<<endl;


    return 0;
}