#include<iostream>
using namespace std;

class P{

public:
P(){

    cout<<" ";
    
}
static int a;
};

int P::a=3;

class Q:public P{

public:

Q(){

    a=4;

}

};

int main(){

    Q q1;
    cout<<P::a;

    return 0;
}