#include<iostream>
using namespace std;

void swap(int *x, int *y){
     
     int temp =*x;
     *x=*y;
     *y=temp;

}

int main(){

     int x=30;
     int y=20;

     int *p1=&x;
     int *p2=&y;

cout<<"before swapping : ";
cout<<"X="<<x<<" "<<"Y="<<y<<endl;
     swap(p1,p2);

     cout<<"after swapping : ";
cout<<"X="<<x<<" "<<"Y="<<y<<endl;
     return 0;
}