#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter the vale ofd n : ";
     cin>>n;

     int f=0;

     string s= to_string(n);
     for(int i=2; i<s[i]; i++){

          if((int)s[i-2]+(int)s[i-1]-'0'>(int)s[i]-'0'){

               f+=1;

          }
     }

     if(f==0)
     cout<<"mav number";
     else
     cout<<"not a mav number ";

     return 0;
}