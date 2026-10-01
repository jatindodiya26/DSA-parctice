#include<iostream>
using namespace std; 

int partition(int arr[], int l, int r){
        \
        int pivot=arr[r];

        int i=l-1;//for inserting elements less ha pivot element
        //J for finfding elements less than pivot

        for( int j=l;j<r;j++){

          if(arr[j]<pivot){
               i++;
               swap(arr[i],arr[j]);
          }
        }

        swap(arr[i+1],arr[r]);

     return i+1;
}
void Quicksort(int arr[], int l, int r){

     if(l>=r){
          return;
     }
   int pi=partition(arr,l,r);
   Quicksort(arr,l,pi-1);
   Quicksort(arr,pi+1,r);

}
int main(){

     int arr[]={ 10,20,3,22,33,11,23,3,};
     int n=sizeof(arr)/sizeof(arr[0]); 

     Quicksort(arr,0,n-1);

     for(int i=0; i<n; i++){

          cout<<arr[i]<<" ";
     }

     return 0;
}