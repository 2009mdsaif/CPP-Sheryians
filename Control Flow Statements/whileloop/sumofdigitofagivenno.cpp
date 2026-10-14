#include<iostream>
using namespace std;
int main (){
    int n, sum=0; ;
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"sum of the digits: "<<sum<<"\n";
}