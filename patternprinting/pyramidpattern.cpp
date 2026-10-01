#include<iostream>
using namespace std;

int main(){

int m;

cout<<"enter the values of rows ";
cin>>m;

for(int i=1; i<=m; i++){
    for(int j=1; j<m-i; j++){ //spaces

        cout<<" ";

    }
    for(int k =1; k<=2*i-1; k++){  //stars

        cout<<"*";
    }

 cout<<endl;

}

}