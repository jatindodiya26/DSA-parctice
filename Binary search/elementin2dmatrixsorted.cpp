#include<iostream>
#include<vector>
using namespace std;

int find_element(vector<vector<int>>&v,int target){

     int n=v.size();
     int m=v[0].size();

     int low=0;
     int high=(m*n)-1;

     while(low<=high){

          int mid=(low+high)/2;
          int x=mid/m;
          int y=mid%n;

          if(v[x][y]==target)
              return true;
          else if(v[x][y]>target)
               high=mid-1;
          else
               low=mid-1;

     }

     return false;
}
int main(){
     int n;
     cout<<"enter n :";
     cin>>n;
  
     vector<vector<int>>v(n);
     cout<<"enter the value inb vector :";
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
          cin>>v[i][j];
     }
}

     int target;
     cout<<"enter the target vfalue :";
     cin>>target;
     cout<<find_element(v,target);

     return 0;
}