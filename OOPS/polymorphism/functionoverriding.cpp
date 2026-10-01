#include<iostream>
using namespace std;

class Demo{
     public:
     
virtual void show(){                     //--> multiple copies are not generated
          cout<<"show A"<<endl;
     }
virtual  void display(){               //--> multiple copies are not generated
          cout<<"Display A\n";
     }
};

class Demo2:public Demo{

     public:

     void show(){

          cout<<"show B\n";
              
    }
    void display(){
    
    cout<<"Display B\n";
    
    }

};

int main(){

   Demo *d,s;     //--> pointer of the base class and object of base class is created
   Demo2 d2;

   d=&s;
   d->show();
   d->display();

  d=&d2;        // --> changing refrence st runtime thats why its is called runtime polymorphism
  d->show();
  d->display();

  return 0;

}
