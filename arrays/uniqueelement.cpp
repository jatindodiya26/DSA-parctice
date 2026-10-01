#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size of array";
cin>>n;

int arr[n];

cout<<"enter the elements in the array";

for(int i=0; i<n; i++){

    cin>> arr[i];

}


for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

       if( arr[i]==arr[j]){

        arr[i]=-1;
        arr[j]=-1;
    
       }

        }

}
int ans;

for(int i=0; i<n; i++){
    if(arr[i]>0){

        ans= arr[i];

    }
}


cout<<"unique element: "<<ans;

return 0;

}