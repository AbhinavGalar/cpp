#include<iostream>
using namespace std;
int main(){
    int smaller=4;
    int larger=6;
    int hcf;
    for(int i=1; i<=smaller; ++i){
        if(larger%i==0 && smaller%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
}