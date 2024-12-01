#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int a;
    cin>>a;
    for(int i=1;i<a;++i){
        if(a%i==0){
            sum=sum+i;
        }
    }
    if(sum==a){
        cout<<"perfect number";
    }
    else {
        cout<<"not a perfect number";
    }
}