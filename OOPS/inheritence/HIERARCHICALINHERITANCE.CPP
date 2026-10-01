#include<iostream>
using namespace std;

class A{
      
      protected:
      int a, b;

    public: 
    void getvalue1(){
cout<<"enter the value of a\n";
cin>>a;
cout<<"enter the value of b\n";
cin>>b;

    }
    
};

class B:public A{

public: 

void sum(){

    cout<<"sum of a and b is : "<<a+b;
    cout<<endl;
    
}
};

class C:public A{

public:

void multi(){

    cout<<"multi of a and b is : "<<a*b;

}


};

int main(){

B obj;
C obj1;

obj.getvalue1();
obj.sum();

obj1.getvalue1();
obj1.multi();


return 0;


}



