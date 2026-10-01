#include<iostream>
#include<vector>
using namespace std;

void bucketsort(float arr[],int n){
     vector<vector<float>>bucket(n,vector<float>());

 float maxx=arr[0];
 float minn=arr[0];

 for(int i=0; i<n; i++){
     maxx= max(maxx,arr[i]);
     minn= min(minn,arr[i]);
 }

 float range=(maxx-minn)/n;
 
 for(int i=0; i<n; i++){

     int idx=(arr[i]-minn)/range;
     float diff=(arr[i]-minn)/range - idx;

     if(diff==0 && arr[i]!=minn){
          bucket[idx-1].push_back(arr[i]);
     }
     else{
          bucket[idx].push_back(arr[i]);
     }
 }
     for(int i=0; i<n; i++){
          if(!bucket[i].empty())
             sort(bucket[i].begin(), bucket[i].end());
     }

     int k=0;
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               arr[k++]=bucket[i][j];
          }
     }

}
int main(){
    
     float arr[]={0.13,0.45, 2.39,5.36,9.46,3.94,2.98};
     int size=sizeof(arr)/sizeof(arr[0]);

     bucketsort(arr,size);

     for(int i=0; i<size; i++){
          cout<<arr[i]<<" ";
     }

     return 0;
}