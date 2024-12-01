// function==========
#include <iostream>
using namespace std;
// call by value
void sum(int a){
    a=30;
}
int main() {
    int a=20;
    sum(a);
    cout<<a;

}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// call by refrence
void sum(int &a){
    a=30;
    cout<<a;
}
int main() {
    int a=20;
    sum(a);
    cout<<a;

}

// revervalue

#include <iostream>
using namespace std;
int reverse(int n)
{
    int rv = 0;
    int d1;
    
    while(n>0)
    {
        rv = rv*10+n%10;
        n=n/10;
    }
    return rv;
}
int main(){
    int n = 123;
    cout<<reverse(n);
} 




// pointer

#include <iostream>
using namespace std;
int sum(int *a){
    *a=10;
    return *a;
}
int main() {
    int a;
    cout<<sum(&a);
 
}



// recursion

#include <iostream>
using namespace std;
int sum(int a){
    
    if(a<=1){
        return 1;
    }
    else{
        return a+sum(a-1);
    }
    
}
int main() {
    int a=10;
    cout<<sum(a);

}

// feboniceserise

#include <iostream>
using namespace std;
int fibo(int number){
    if(number<=1){
        return number;
    }
    else{
        return fibo(number-1)+fibo(number-2);
    }
    
}
int main() {
    int number=5;
    cout<<fibo(number);

}
