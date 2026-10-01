#include<iostream>
using namespace std;


void merge(int arr[],int left, int mid,int right ){

     int s1=mid-left+1;
     int s2=right-mid;

     int an[s1],bn[s2];

     for(int i=0; i<s1; i++){
          an[i]=arr[left+i];
     }

     for(int j=0; j<s2; j++){
          bn[j]=arr[mid+1+j];
     }

     int i=0,j=0,k=left;

     while(i<s1 && j<s2){
          if(arr[i]<arr[j])
              arr[k++]=arr[i++];
          else
              arr[k++]=arr[j++];
     }

  while(i<s1)
     arr[k++]=arr[i++];

     while(i<s2)
      arr[k++]=arr[j++];

}

void mergesort(int arr[],int left,int right){

     if(left<right){
          
          int mid=(left+right)/2;

          mergesort(arr,left,mid);
              mergesort(arr,mid+1,right5);
              merge(arr,left,mid,right);
     }
}

int main(){
     int n;
     cout<<"enter the value of n :";
     cin>>n;

     int arr[n];
     for(int i=0; i<n; i++)
        cin>>arr[i];

    mergesort(arr,0,n-1);


     return 0;
}