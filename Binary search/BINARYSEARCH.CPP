#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>&v,int target){

     int low=0;
     int high=v.size()-1;

     while(low<=high){

          int mid=(low+high)/2;

          if(v[mid]==target)
            return mid;
          
            else if (v[mid]<target)
                low=mid+1;

           else 
              high=mid-1;
            
}

return -1;

}
int main(){

     int n;
     cout<<"enter the value of n : ";
     cin>>n;

     vector<int> v(n);
     cout<<"enter the elemenets in vector ";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }

     int target;
     cout<<"enter the taerget vlue ";
     cin>>target;

int result = binarysearch(v,target);

cout<<"result is : "<<result;

return 0;
}