#include<iostream>
#include<vector>
using namespace std;
int find_target(vector<int> &v,int target){

     int low=0;
     int high=v.size()-1;

     while(low<=high){

          int mid=(low+high)/2;

          if(v[mid]==target)
            return mid;

          if(v[mid]>=v[low]){

               if(target>v[low]&&target<=v[mid]){
                    high=mid-1;
               }
               else{
                    low=mid+1;
               }
          }

          else{

               if(target>v[low]&&target<=v[mid]){
                    low=mid+1;
               }
               else{
                    high=mid-1;
               }
          }

     }
     return -1;
}
int main(){
      
     int n;
     cout<<":enter the size:";
     cin>>n;

     vector<int>v(n);
cout<<"enter the lelements in thr vevcto";
for(int i=0; i<n; i++){
     cin>>v[i];
}

int m;
cout<<"enter the target elemewyt";
cin>>m;

int result=find_target(v,m);
cout<<"reult is "<<result;
     return 0;
}