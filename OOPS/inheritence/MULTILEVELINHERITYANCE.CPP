#include<iostream>
using namespace std;;

class one{
    public:
    void show_one(){

cout<<"i am from class 1";
cout<<"\n";
    }
};

class two:public one{

    public:

    void show_two(){

        cout<<"i am from class 2"<<endl;
    }
};

class three:public two{

    public:

    void show_three(){

        cout<<"i am from class 3"<<endl;

    }

};

 int main(){

three s;

s.show_one();
s.show_two();
s.show_three();

return 0;


 }
