#include<iostream>
using namespace std;

int main(){

int n;

cout<<"enter size of array";
cin>>n;

int arr[n];

for(int i=0; i<n; i++){

    cin>>arr[i];

}


int x;
cout<<"enter x";
cin>>x;
int occurences=0;

for(int i=0; i<n; i++){

if(arr[i]==x){

    occurences++;
    
}

}
    cout<<occurences<<" ";
    
return 0;

}
