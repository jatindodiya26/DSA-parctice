#include<iostream>
using namespace std;

class A{

    public:
    virtual void show()=0;
                               // ABSTRACT CLASSES ARE THE CLASSES WHICH CONTAIN ATLEAST ONE VIRTUAL FUNCTION;
    void display(){              // VIRTUAL FUNCTION ARE THE FUNCTION THAT ARE ARE NOT DEFINED AT THE DECLARATION OF THE FUNCTION  
                                   // WE CAN NOT CREATE OBJECT OF THIS CLASSES SO THAT WE CREATWE ANOTHER CLASS AND THEN MAKE OBJECT OF ANOTER CLASS.
        cout<<"hi  i am jatin singh "<<endl;

    }

};

class B: public A{

public:
void show(){                   //OVERRIDING OF THE FUNCTION SHOW;

cout<<"hello\n";

}

};
int main(){

        B b1;              //CLASS B OBJECT;
        b1.show();   
    
        b1.display();
        return 0;




}