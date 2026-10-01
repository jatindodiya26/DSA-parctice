#include<iostream>
using namespace std;

int main(){

int m;

cout<<"enter the values of rows ";
cin>>m;

for(int i=0; i<=m; i++){
    for(int j=1; j<=i; j++){  //upper part
        cout<<"*";
    }
    
    int spaces = 2*m-i;

    for(int j=1; j<=2*m-i; j++){  
        cout<<" ";
    }

 for(int j=1; j<=i; j++){ 
        cout<<"*";
 }

 cout<<" ";

}

for(int i=m; i>=1; i--){
    for(int j=1; j<=i; j++){  //lower part
        cout<<"*";
    }
    
    int spaces = 2*m-i;

    for(int j=1; j<=2*m-i; j++){  
        cout<<" ";
    }

 for(int j=1; j<=i; j++){ 
        cout<<"*";
 }

 cout<<" ";

}
 

}