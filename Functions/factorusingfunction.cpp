#include<iostream>
using namespace std;
   
    int fact(int num);

    int main (){
        int a;
        cin>>a;
        fact(a);
    }
    int fact(int num){
        for (int i=1; i<=num; i++){
            if (num%i==0){
                cout<< i<<"\n";
            }
           
        }
    }
