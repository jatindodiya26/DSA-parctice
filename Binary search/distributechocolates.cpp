#include<iostream>
#include<vector>
using namespace std;

//distribute chocolates to  childrens suich that max. number of chocoltes allocated to a student is min.
bool can_distribute(vector<int>&v,int mid,int s){

    int n=v.size();
    int students_required=1;
    int currsum=0;

    for(int i=0; i<n; i++){

     if(v[i]>mid){
          return false;
     }
     if(currsum+v[i]>mid){
          students_required++;
          currsum=v[i];
          if(students_required>=s){
               return false;
          }
          else{
               currsum+=v[i];
          }

     }
}
     return false;

    }
int dist_choco(vector<int>&v,int s){
     int n=v.size();
     int low=v[0];
     int high;
     for(int i=0; i<n;i++){
         high+=v[i];
      }

      int ans=-1;
      while(low<=high){
          int mid=(low+high)/2;

          if(can_distribute(v,mid,s)){
               ans=mid;
               high=mid-1;
          }
          else{
               low=mid+1;
          }
      }
     
      return ans;
}
int main(){
   int n;
   cout<<"enter the value of n :";
   cin>>n;

   vector<int> v(n);
   cout<<"enter elements in vector:";
   for(int i=0; i<n; i++){
     cin>>v[i];
   }

   int studemts;
   cout<<"entrer no. of students : ";
   cin>>studemts;
     
   cout<<dist_choco(v,studemts);
     return 0;
}