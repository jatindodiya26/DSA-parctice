#include<iostream>
using namespace std;

int main(){

char name[30];
int n;
cout<<"enter the value of n";
cin>>n;


cout<<"enter the characters";
for(int i=0; i<n; i++){

    cin>>name[i];
     }
for(int i=n-1; i>=0; i--){

    cout<<name[i];
    
}

return 0;
}