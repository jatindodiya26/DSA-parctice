#include<iostream>
#include<cstring>
using namespace std;

int main(){

int t=0;
char  FNM[50];
char  LNM[50];

cout<<"first nme is :"<<endl;
cin>>FNM;

int n=strlen(FNM);
for(int i=0; i<n; i++){

LNM[t]=FNM[i];
t++;

}
LNM[t]=0;

cout<<LNM<<endl;
cout<<n;
}