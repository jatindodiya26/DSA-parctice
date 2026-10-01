#include<iostream>
using namespace std;

class swapping{

void swap ( int a, int b){
  a = a+b;
   b = a-b;
  a = a-b;
}

};
int main(){

int a = 10;
int b= 20;
  cout<<"before swapping values are"<<endl;
  cout<<a<<b<<endl;

  swap( a,  b);

    cout<<"after swapping values are"<<endl;
    cout<<a<<b<<endl;

}