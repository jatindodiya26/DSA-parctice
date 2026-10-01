#include<iostream>
#include<cstring>
using namespace std;

int main(){
char n1[50];
char n2[50];

cout<<"enter n1 :";
cin>>n1;


cout<<"enter n2 :";                                   
cin>>n2;

strcat(n1," ");
strcat(n1,n2);                 ///concatenatation of  two string rresults third string

cout<<n1;
cout<<strlen(n1);                 ///length of striing

return 0;
}