#include<iostream>
using namespace std;
int main (){
    /* logical operators are three types 
     && (and) || (or) ! (not)
     && this is and operator he given 1 if both statements are true
     || this is or operator he given 1 if at least one statement is true
     ! this is not operator he give basically opposite value of the given statement
     */
    cout<<(5>3 && 10>5)<<endl; //true and true = true
    cout<<(9>3 || 10<5)<<endl; //true or false = true
    cout<<!(5>3)<<endl; //not true = false
}