#include<iostream>
using namespace std;

class A{
    protected:
    int x;
    public:
    void getx(){

        cout<<"enter the value of x : "<<endl;
        cin>>x;

    }
};

class B:public A{
    
        protected:

        int y;
        public:
        void gety(){

            cout<<"enter the value of y\n";
            cin>>y;
        }
};

class C{

    protected:

    int z;
    public:
    void getz(){
        cout<<"enter the value of z\n";
        cin>>z;

    }
};

class D:public B, public C{

public:

void sum(){


    cout<<"sum of this variables is : "<<x+y+z ;                                                 
       cout<<endl;

}


void multi(){

    cout<<"\n multi of this variab;les is :"<<x*y*z;
}

};

int main(){

 D obj;
 obj.getx();
 obj.gety();
 obj.getz();
 obj.sum();

obj.getx();
obj.gety();
obj.getz();
obj.multi();
 return 0;

}