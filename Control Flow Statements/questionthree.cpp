#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"enter year: ";
    cin>>a;
    if(a%100==0){ 
        if(a%400==0){
        
        cout<<"given year is a leap year"<<"\n";
        }else{
            cout<<"given year is not a leap year"<<"\n";
        }
    }else if(a%4==0){
        cout<<"given year is a leap year"<<"\n";
    }else{
        cout<<"given year is not a leap year"<<"\n";
    }
}

