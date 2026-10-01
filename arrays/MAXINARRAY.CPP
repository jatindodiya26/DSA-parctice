#include<iostream>
using namespace std;

int main(){

    int num[]={10, 20, 30, 45, 33, 76, 96, 99, 88};
    int max=0;
    int min=0;

    int n= sizeof(num)/sizeof(num[0]);

for (int i=0; i<n; i++){

    if(num[i]>max){

    max=num[i];


}

if(num[i]<min){

    min=num[i];
}

cout<<"min is : "<<min;
cout<<"max is : "<<max;

}
return 0;


}