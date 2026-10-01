
#include<iostream>
#include<string>
using namespace std;
int main (){
    int a=10,b=24;
    int temp=b;
    b=a;
    a=temp;
    cout << "a=  " << a << ", b=" << b << endl;
    return 0;
}
