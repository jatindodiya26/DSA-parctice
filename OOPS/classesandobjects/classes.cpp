#include <iostream>
using namespace std;

class algebra{

public:

int a, b;

algebra(int x , int y ){

    a=x; 
    b=y;

}

    int add(){
        return a+b;
    }

    int subtract(){
        return a-b;
}
    
    int multiply(){
        return a*b;
    }


};

int main(){

int x, y;
    
algebra obj(x=6, y=9);

cout<<obj.add()<<endl;

cout<<obj.subtract()<<endl;

cout<<obj.multiply()<<endl;


return 0;

}