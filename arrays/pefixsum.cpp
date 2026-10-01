#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"enter size of array : ";
 cin>>n;

int arr[n];
cout<<"enter n elements";

for(int i=0; i<n; i++){

    cin>>arr[i];

}

for(int i=1; i<=n; i++){

    arr[i]+=arr[i-1];

}

for(int i=0; i<=n; i++){

   cout<<"array is : "<<arr[i]<<endl;
   
   }

   return 0;
} 