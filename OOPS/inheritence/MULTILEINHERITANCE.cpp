#include<iostream>
using namespace std;

class A{

protected:

int x;

    public:

void getx(){

    cout<<"enter x";
    cin>>x;

}
};

class B{
    protected:
    int y;
    public:

    void gety(){

        cout<<"enter y";
         cin>>y;

    }
};

class C:public A, public B{

public:

void sum(){

    cout<<"sum is :"<<x+y<<endl;

}


};



int main(){




C obj;
obj.getx();
obj.gety();
obj.sum();

return 0;





}