#include<iostream>
using namespace std;

int main (){

  int n;
  cout<<"enter size of array";
  cin>>n;
int arr [n];
for(int i=0; i<n; i++){
      cin>>arr[i];
}  
   for (int j=0; j<n; j++){
     cout<<arr[j]<<" ";
   }

  int sum=0;

  for(int k=0; k<n; k++){
        sum+=arr[k];
  }  
    cout<<"sum is :"<<sum;
}