#include<iostream>
using namespace std;

int main(){

int x1 =1 , x2 =2 , x3 =3;
int  y1=1, y2 = 2, y3  = 3;

double m1 = y2 - y1/x2 - x1;
double m2 = y3 - y2/x3 - x2;


if (m1==m2){

    cout<<"lies on same line";

}
else {

    cout <<"does not lies on the same line";

}
return 0;

}
