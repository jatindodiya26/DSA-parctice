#include<iostream>
using namespace std;
int main(){

int num;

cout<<"enter a number";
cin>>num;

if((num%15)&&(num %5==0 || num% 3==0 )){

    cout<<"required condition satisfied";

}
else
{
    cout<<"condition not satisfied";

}
return 0;

}

    



