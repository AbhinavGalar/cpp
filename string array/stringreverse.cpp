#include<iostream>
#include<string>
using namespace std;
void revstring(string str){
    int start =0;
    int end=str.length()-1;
    
    while(start<end){
        char temp;
        temp=str[end];
        str[end]=str[start];
        str[start]=temp;
        
        start++;
        end--;
    }
    cout<<str[0];
}
int main(){
    string str="abhinav";
    revstring(str);
}