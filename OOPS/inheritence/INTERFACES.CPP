#include<iostream>
using namespace std;

class A{

public:           //when a class contain all the pure virtual functions then it is called interfaces.
virtual void show()=0;

virtual void display()=0;

};

class B:public A{

    public:
    void show(){

        cout<<"hello everyone\n";

    }
    void display(){

        cout<<"good morning\n";
    }

};

int main(){

B obj;
obj.show();
obj.display();
return 0;


}
