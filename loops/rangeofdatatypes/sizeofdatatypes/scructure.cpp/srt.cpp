// srt (self refrencial structure)
// =========================normal structure=========================

// ===============structure========================
#include <iostream>
using namespace std;
struct info {
  int rollno =2;
  char section = 'A';
  string name = "Rajiv";
  float marks[5]={1,2,3,4,5};
  

void display(){
    cout<<rollno<<section<<name<<marks<<endl;
    
}
}
;
int main(){
    // cout<<p.display();
    // p.display();
    info p;
     p.display();

}
#include <iostream>
using namespace std;
struct info {
  int rollno;
  char section;
  string name ;
  float marks[5];
  

void display(struct info a){
    cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl;
    for(int i=0; i<5; ++i){
        cout<<a.marks[i];
    }
    
}
}
;
int main(){
    // cout<<p.display();
    // p.display();
    info p={1, 'A',"Rajiv",{1,2,3,4,5}};
     p.display(p);
    
}

// =====================pointer to structure=================

#include <iostream>
using namespace std;
struct info {
    int rollno;
    char section;
    string name;
    float marks[5];
    void display(struct info a){
        cout<<a.rollno<<endl<<a.section<<endl<<a.name<<endl<<a.marks;
        for(int i=0; i<5; ++i){
            cout<<a.marks[i];
        }
    }
};
int main(){
    info p ={1,'A',"Rajiv",{1,2,3,4,5}};
    // p.display(p);
    info *d = &p;
    d->display(p);
}


// ========================(srt)self refrefren structure=============================

#include <iostream>
using namespace std;
struct info {
 int a=10;
 int *link;
}p;
int main(){
    info d;
p.link = NULL;
p.a=11;
d.link=NULL;
d.a=12;
p.link= &d;
// p->a;
}