#include<iostream>
using namespace std;
int main(){
int num;
int sumofdigits=0;


cout<<"enter the number";
cin>>num;

while(num>0){

sumofdigits+=num%10;
num= num/10;

}

cout<<sumofdigits;



}
