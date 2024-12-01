#include <iostream>
using namespace std;
int main(){
    cout<<"enter your number";
    int counter=0;
    int a;
    cin>>a;
    for(int i=1; i<9; ++i){
        if(a%i==0){
            ++counter;
        }
    }
    if(counter==2){
        cout<<"prime number";
    }
    else {
        cout<<"not a prime number";
    }
}