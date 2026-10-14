#include<iostream>
using namespace std;
int main(){
   int a;
   cin>>a;
   if (a%2==0){
    if(a==0){
      cout<<"given number is zero"<<"\n";
      }
      else{
      cout<<"given number is even number"<<"\n";
    }
   }
   else{
    cout<<"given number is odd number"<<"\n";
   }

return 0;
}