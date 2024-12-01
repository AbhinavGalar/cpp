#include <iostream>
using namespace std;
int main(){
    
    
    
    int n=1234;
    int d1;
    int rv=0;

    while(n>0){
        rv=rv*10+n%10;
        n=n/10;
    }
    
  cout<<rv;
}
// ===================reverse using function===============