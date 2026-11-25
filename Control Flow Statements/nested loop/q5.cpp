#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for ( int i = 1; i<=n; i++){
         for ( int l=n-i; l>=1; l--){
            cout<<" ";
        }
    for ( int j=1; j<=i; j++){
            cout<<"* ";

        }
  cout<<"\n";
}
return 0;
}