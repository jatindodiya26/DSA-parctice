#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int l,int r ){

     int pivot=arr[r];
     int i=l-1;

     for(int j=l; j<r;j++){

          if(arr[j]<pivot){
              i++;
               swap(arr[i],arr[j]);
          }
     }
     swap(arr[i+1],arr[r]);

     return i;
}
int kthsmallest(int arr[],int l, int r , int k){

     if(k>0&&k<=r-l+1){
   
          int pos=partition(arr,l,r);

          if(pos-l==k-1)
              return arr[pos];

         else if(pos-l>k-1)
              return kthsmallest(arr,l,pos-1,k);

         else
              return kthsmallest(arr,pos+1,r,k-pos+l-1);

              }
     return -1 ;
}
int main(){

      int n;
      cout<<"enter the size of array";
      cin>>n;
      int arr[n];

      for(int i=0; i<n; i++){
     
          cin>>arr[i];

      }

      int k;
      cout<<"enter the kth position  :";
      cin>>k;

      int result=kthsmallest(arr,0,n-1 ,k);

      cout<<"kth element is  is :"<<result<<endl;

     return 0;
}