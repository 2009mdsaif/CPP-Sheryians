#include<iostream>
#include<string>
using namespace std;
int main (){
    string name;
    int age;
    cout<<"enter your age: ";
    cin>>age;
    cout<<"enter your name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Hello "<<name<<", you are "<<age<<" years old."<<'\n';



}