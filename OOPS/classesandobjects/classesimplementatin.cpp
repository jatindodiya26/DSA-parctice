#include<iostream>
using namespace std;

class item{

    int  num;
    float cost;
    public:

    void getdata(int , float);

    void putdata(){

        cout<<"number : "<<num<<endl;
        cout<<"cost : "<<cost<<endl;

    }
    };

    void item::getdata(int a, float b){               //outside class  function declaration

        num = a;
        cost =b;

    }
int main(){

item  z;
z.getdata(5, 7.0);
z.putdata();

item y;
y.getdata(200, 175.50);
y.putdata();

return 0;


}