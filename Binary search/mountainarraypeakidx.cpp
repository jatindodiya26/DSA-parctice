#include<iostream>
#include<vector>
using namespace std;

int peak_value(vector<int>&v){
     int low=0;
     int high=v.size()-1;
     int ans=-1;

     while(low<=high){

          int mid=(low+high)/2;

          if(v[mid]>v[mid-1]){
               ans=mid;
               low=mid+1;
               
          }
          else{
               high=mid-1;
          }

     }
     return ans;
}

int main(){
     int n;
     cout<<"enter the vcalue of n :";
     cin>>n;

     vector<int>v(n);

     cout<<"enter the elements in the array :";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     int result=peak_value(v);
     cout<<"result ius : "<<result;
     return 0;
}