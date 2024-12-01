#include<iostream>
using namespace  std;
int main(){
    int index=0;
    int n=5;
    int arr[n]={1,0,2,0,1};
    for(int i=0;i<n;++i){
        if(arr[i]!=0){
            arr[index++]=arr[i];
        }
        
   
        
    }
         while(index<5){
            arr[index++]=0;
        }
    for(int i=0;i<5;++i){
        cout<<arr[i];
    }
}
// =======================================================================
#include<iostream>
using namespace  std;
int main(){
    int target;
    int index=0;
    int n=5;
    int arr[n]={1,0,2,0,1};
    for(int i=0;i<n;++i){
        if(arr[i]!=target){
            arr[index++]=arr[i];
            cout<<arr[i];
        }
    }
}
// ===========================================================
#include <iostream>
using namespace std;
int main(){

    int missing;
    int n=5;
    int sum;
        int asum;
    int arr[]={1,3,4,5};
    sum=n*(n+1)/2;
    for(int i=0;i<4;++i){
        asum=asum+arr[i];
    }
    missing=sum-asum;
     cout<<missing;
}
// =================================== delte the duplicate  ================================
#include <iostream>
using namespace std;
int main(){
    int index=0;
   int n=4;
  int arr[]={1,2,3,2,};
  for(int i=0;i<n;++i){
      for(int j=i+1;i<n;++i){
          if(arr[i]!=arr[j]){
               arr[j]-1;
          }
      }
  }
  for( int j=0;j<n;++j){
         if(arr[j]!=-1){
             arr[index++]=arr[j];
             
         }
  }
  
  for(int i=0;i<3;++i)
  {
      cout<<arr[i];
  }
        
}
// ================================================the kth  term progrma========
#include <iostream>
using namespace  std;
int main(){
    int n=5;
    int temp=0;
    int arr[]={19,20, 21,22,23}
    for(int i=0;i<n;++i){
        for(int j=i+1;i<n;++j){
            temp=arr[j];
            arr[j]=arr[n-1-i];
            arr[n-i-1]=temp;
        }
        cout<<temp;
    }
}
// ======================== roatation wala program=======
#include<iostream>
// ==================recurssion =========
#include <iostream>
using namespace std;
int sum(int number)
{
 if(number<=1){
         return 1;
     }
      else {
    return number+sum(number-1);
     }
}
   int main(){
       int number=10;
       cout<<sum(number);
   }
//    ====================================fibonacci resires=========
#include <iostream>
using namespace std;
int  fibo(int number)
{
 if(number<=1){
         return number;
     }
      else {
    return fibo(number-1)+fibo(number-2);
     }
}
   int main(){
       int number=5;
       cout<<fibo(number);
   }
//    ====================
  #include <iostream>
using namespace std;
 struct info
 {
     int rollno=1;
     char section='a';
     string name="abhinav";
     float marks[5]={1,2,3,4,5};
     
     void display(){
         cout<<rollno<<section<<name;
     }
 } ;
//  =============
#include <iostream>
using namespace std;
 struct info
 {
     int rollno=1;
     char section='a';
     string name="abhinav";
     float marks[5]={1,2,3,4,5};
     
     void display(){
         cout<<rollno<<section<<name;
     }
 } ;
 int main(){
          info p;
            p.display();
 }
//  =============================structure program============
#include <iostream>
using namespace std;
 struct info
 {
     int rollno=1;
     char section='a';
     string name="abhinav";
     float marks[5]={1,2,3,4,5};
     
     void display( info a){
         cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl;
         for(int i=0;i<5;++i){
             cout<<a.marks[i];
         }
     }
 } ;
 int main(){
          info p={1,'a',"abhinav",{1,2,3,4,5}};
          p.display(p);
 }
//  =========================error wala question 
#include <iostream>
using namespace  std;
struct info {
     int a=10;
     int *link;
}p;

int main(){
   info d;
p.*link=NULL;
p.a=11;
d.*link=NULL;
d.a=12;
p.link=&d;
cout<<p.link->a;  


}
// =====================================================inheritance  (single)======================
#include <iostream>
using namespace std;
class school 
{
 public :int a=10;
};
class student :public school
{
    
};
int main(){
    student o;
    cout<<o.a;
}
// =========================multilevel===========