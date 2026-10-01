#include<iostream>
using namespace std;

int main(){

int x,i,n;

cout<<"enter he value of n";
cin>>n;
int arr[n];

cout<<"enter the elemnets";

for(int i=0; i<n; i++){
    cin>>arr[i];
}

for(int i=0; i<n; i++){
    cout<<arr[i]; 
}

cout<<"enter he value of x";
cin>>x;

for (int i=0; i<n; i++){

if(arr[i]==x){
    
cout<<"answer found"<<i;
    
}

}




}