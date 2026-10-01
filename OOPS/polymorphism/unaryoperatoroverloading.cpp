#include<iostream>
using namespace std;

class test{

     int a;                        //pre increment ++X ko ham friend function ki help se krenge;
    public:                         //post increamnet x++ ko ham member function se krenge;
    test(int x=0){
        a=x;
    }
    void display(){

        cout<<a;

    }
   
    friend test operator++(test&);


};

test operator++(test& t){

test t3;
t3=++t.a;

return t3;

}

int main(){

test t1(10);
test t3;
t3=++t1;
t3.display();
t1.display();
return 0;

}