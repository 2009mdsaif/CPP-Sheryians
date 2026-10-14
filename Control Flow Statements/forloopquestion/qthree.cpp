#include<iostream>
using namespace std;
int main (){
    int n , factorial =1; // factorial of first n natural number as user input
    cin>>n;
   // for ( int i=n; i>=1; i--){ ye bhi possible hai
   for ( int i=1; i<=n; i++){
        factorial*=i;
    }
    cout<<factorial;
}