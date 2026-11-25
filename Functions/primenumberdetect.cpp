#include<iostream>
using namespace std;
   
void prime(int num);
      
        int main (){
            int a;
            cin>>a;
            prime(a);
            return 0;
        }
        
        void prime(int num){
            int count=0;
            for (int i=1; i<=num; i++){
                if (num%i==0){
                    count++;
                }
            }
            if (count==2){
                cout<<"prime number"<<"\n";
            }
            else{
                cout<<"not a prime number"<<"\n";
            }
        }
    
