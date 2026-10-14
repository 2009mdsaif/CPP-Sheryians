#include<iostream>
using namespace std;
int main (){
    int n , sum=0; // sum of first n natural number as user input
    cout<<"enter the number ";
    cin>>n;
    for ( int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum;
}