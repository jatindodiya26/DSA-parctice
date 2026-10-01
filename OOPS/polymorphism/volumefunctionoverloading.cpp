#include<iostream>
using namespace std;

class student{

public:

int volume(int s){

return s*s*s;

}

double volume(double r, float h){

return 3.14*r*r*h;

}

long volume(long l,int b, int h){

    return l*b*h;

}

};

int main(){

    student s;
    cout<<" "<<s.volume(6);
    cout<<" " <<s.volume(2.6, 8);
    cout<<" "<<s.volume(100, 75, 15);

    return 0;

}