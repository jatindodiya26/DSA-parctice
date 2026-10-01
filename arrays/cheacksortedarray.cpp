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

for(int i=0; i<n; i++){
    
    if(arr[i]>arr[i-1]){

        cout<<"is sorted array";
        break;
    }

    else {
        cout<<" not a sorted array :";
        break;
    }

    return 0;
}

}
