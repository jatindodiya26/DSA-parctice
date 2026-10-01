#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int>&v,int target){
     int low=0;
     int high=v.size()-1; 
     int ans=-1;

     while(low<=high)
     {
            int mid=low+(high-low)/2;

if(v[mid]==target){
     ans=mid;
     high=mid-1;
}
else if(v[mid]<target){
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
     cout<<"enter he size of the vector"<<endl;
     cin>>n;

     vector<int> v(n);
     cout<<"enter elelements of the vector"<<endl;
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     
     int target;
     cout<<"enter the target :";
     cin>>target;

     int result=firstoccurence(v,target);
     cout<<"first occurence of tRGET IS : "<<result<<endl;


     return 0;
}