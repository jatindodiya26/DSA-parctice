#include<iostream>
#include<vector>
using namespace std;

int peak_value(vector<int>&v){
     int low=0;
     int high=v.size()-1;
     int n=v.size()-1;
     
     int ans=-1;

     while(low<=high){

          int mid=(low+high)/2;

          if(mid==0){
               if(v[mid]>v[mid+1])
                   return 0;

                   else
                    return 1;
          }

else if(mid==n-1){
     if(v[mid]>v[mid-1])
         return n-1;
     else
         return n-2;
}

else{

     if(v[mid]>v[mid-1]&&v[mid]>v[mid+1])
            return mid;
     
            else if(v[mid]>v[mid-1])
               low=mid=1;

               else 
                high=mid-1;

}

     }
return ans;

}

     int main(){

          int n;
          cout<<"enter the vlaue of n :";
          cin>>n;

          vector<int>v(n);
          cout<<"enter the elemsnts in the array :";
          for(int i=0; i<n; i++){
               cin>>v[i];
          }

          int result=peak_value(v);
          cout<<"reult is :"<<result;

          return 0;
     }