#include<iostream>
using namespace std;
  
int sum(int a, int b); // function declaration
   
        int main(){
            int ans=sum(5, 6); // function call
            cout<<ans;
            return 0;
        }
             
        int sum(int a,int b){
            return a+b; // function definition
        }