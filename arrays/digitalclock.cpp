#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;

int main(){

     int h,m,s;
     for(h=0;h<=23;h++){
          for(m=0;m<=59;m++){
               for(s=0;s<=59;s++){

               system("cls");
               cout<<h<<":"<<m<<":"<<s<<endl;
               Sleep(100);

               }
          }
     }

     return 0;
}