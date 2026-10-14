#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){    //guess the number btween 1 to 10
    int guess;
    srand(time(0));
    int random=rand()%10+1;
    cout<<" guess the number between 1 to 10: ";
    do{
        cin>>guess;
        if(guess>random){
            cout<<"too high, "; }
            else if(guess<random){
            cout<<"too low, ";}
            else{
            cout<<"congratulations, you guessed the number: "<<random<<"\n";


}
    }while(guess!=random);
}
