#include<iostream>
using namespace std;;

class add{

    protected:

        int a, b,c;

    public:

    void getvalues(){

        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the valure of b"<<endl;
        cin>>b;

    }

    void sum(){

        c=a+b;
    }

    void show_res(){

        cout<<"sum is : "<<c;

    }

};


class multi:public add{

public:

void pro(){

    c=a*b;

}

};

int main(){

    multi obj;
    obj.getvalues();
    obj.sum();
    obj.show_res();

    obj.getvalues();
    obj.pro();
    obj.show_res();

    return 0;
}