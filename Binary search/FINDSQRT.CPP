#include<iostream>
using namespace std;

int SQRT(int n){
     
     int low=0;
     int high =n;
     int ans=-1;

     while(low<=high){
          int mid=low+(high-low)/2;

          if(mid*mid<=n){

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

     cout<<"sqrt of the no is : "<<SQRT(5);

     return 0;

}