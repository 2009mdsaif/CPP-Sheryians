#include<iostream>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;
    int z=1;
    for(int i=2;i<x;i++){
    if(x%i== 0){
        z=i;
        }
    }
    for(int i=1;i<=y;i++){
        x=x/z;
        if(x==y){
            break;
            
        }else{
            continue;
        }
    }
    if(x==y){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
return 0;
}