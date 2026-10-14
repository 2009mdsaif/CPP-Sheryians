#include<iostream>
using namespace std;
int main(){
  int amt;
  double disc=0 , discamt=0;
  cout<<"enter the amount: ";
  cin>>amt;
  if (amt>=0 && amt<=5000){
    disc=0;}
    else if (amt>5000 && amt<=7000){
        disc=0.05;}
        else if (amt>7000 && amt<=9000){
            disc=0.1;
    } else {
        disc=0.2;
    }
    discamt=amt*disc;
    cout<<"bill to pay after discount is: "<<amt-discamt<<"\n";
}

