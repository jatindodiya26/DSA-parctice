#include<iostream>
#include<vector>
using namespace std;

int find_minelement(vector<int> &v){
     
     if(v.size()==1) return v[0];
     int low=0;
     int high=v.size()-1;

     if(v[low]<v[high])
          return low;
     
     while(low<=high){
          int mid=(low+high)/2;

          if(v[mid]>v[mid+1])
               return mid+1;
          
               if(v[mid]<v[mid-1])
                   return mid;

                   if(v[mid]>v[low])
                      low=mid+1;

                      else
                        high=mid-1;
          
     }
     return -1;
}
int main(){
       int n;
       cout<<"entert the value of n";
       cin>>n;
     vector<int>v(n);
     cout<<"enter elemenst in  vector";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }

     int result=find_minelement(v);
     cout<<"min element is ; "<<result;
     return 0;
}