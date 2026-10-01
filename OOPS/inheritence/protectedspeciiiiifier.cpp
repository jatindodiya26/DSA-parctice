#include<iostream>
using namespace std;

class test{

public:

    int a, b, c;
    void getdata(){
        cout<<"enteerr the value of a\n";
        cin>>a;
        cout<<"enteerr the value of b\n";
        cin>>b;

    }

    void calcdata(){

                c=a+b;

    }

protected:

     void showres(){
        cout<<"\n sum is : "<<c;
     }

};

class res:public test{

public:
void displayres(){
    showres();
}

};

int main(){

res r;
r.getdata();
r.calcdata();
r.displayres();

return 0;

}