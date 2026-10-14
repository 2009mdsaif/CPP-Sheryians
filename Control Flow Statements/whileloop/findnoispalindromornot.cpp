#include<iostream>
using namespace std;
int main (){
    int n, rev=0 , original;
    cin>>n;
    original = n;
    while(n>0){
        int lastdigit = n%10;
        rev= rev*10+lastdigit;
        n/=10;

} 
cout<<((rev==original)?"number is palindrome": "number is not palindrome")<<"\n";
}