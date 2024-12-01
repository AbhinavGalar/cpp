#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int larger=arr[-1];
    int seclarger;
    for(int i=0; i<5; i++){
        if(arr[i]>larger){
            larger=arr[i];
        }
    }
     cout<<"larger="<<larger<<endl;
    for(int i=0; i<5; ++i){
        if(arr[i]>seclarger && arr[i]!=larger){
            seclarger=arr[i];
        }
    }
    cout<<"second largest ="<<seclarger;
}