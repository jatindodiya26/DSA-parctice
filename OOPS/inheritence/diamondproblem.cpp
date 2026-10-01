#include<iostream>
using namespace std;

class A{

public:

void showdata(){

    cout<<" NAME : JATIN";

}                                             // ambiguity error ocuured in diamond problem can be overcome by using
                                                      // virtual functions
};

class B: virtual public A{

    public:

    void getdata(){
        
        cout<<"\n BRANCH : AIML ";

    }
};

class C: virtual public A{

    public:

    void setdata(){

        cout<<"\n DIST. : RAJGARH";

    }
};


class D:public B, public C{


// we use this class to call all funtions
};


int main(){

        D obj;
        
        obj.showdata();

        obj.getdata();

        obj.setdata();

        return 0;

}