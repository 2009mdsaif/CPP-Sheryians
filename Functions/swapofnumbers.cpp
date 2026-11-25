#include<iostream>
using namespace std;
void swap(int num1, int num2); // function declaration
  
int main(){
     int a,b;
    cin>>a>>b;
    swap(a,b);
    
}
void swap(int num1, int num2){ // function definition
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<num1<<" "<<num2;
}