#include<iostream>
using namespace std;
int main(){
    // cout<<"enter your number";
    int a;
    int b;
    cin>>a>>b;
    cout<<"enter your number";

    int power=1;
    for(int i=1; i<=b;++i){
        if(a%i==0){
            power=power*a;
        }
    }
     cout<<power;
}