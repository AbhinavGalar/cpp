#include<iostream>
using namespace std;
int main(){
    int a=1;
    int n=5;
    int d=4;
    int term=0;
    for(int i=0;i<n;++i){
        term=a+i*d;
        cout<<term;
    }
}