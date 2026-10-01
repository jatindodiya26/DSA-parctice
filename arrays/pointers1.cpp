#include<iostream>
using namespace std;

int main(){

int x=20;
int y=30;

cout<<"value of x : "<<x;
cout<<"\n value of y : "<<y;

int *ptrx=&x;
int *ptry=&y;

cout<<"\nvalue of adress of x : "<<ptrx;
cout<<"\n value of adress of y : "<<ptry;

//derefrencing values again

cout<<"\n value of x  by derefrencing : "<<*ptrx;
cout<<"\n value of y by derefrencing : "<<*ptry;          


return 0;

}