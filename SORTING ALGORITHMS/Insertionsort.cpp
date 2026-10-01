#include<iostream>
#include<vector>
using namespace std;
// Repeatedly take elements from Unsorted suBARRAy and insERTED sorted sub array
void insertionsort(vector<int> &v){

     int n= v.size();

     for(int i=0; i<n; i++){

          int current=v[i];
          int j= i-1;
  
          while(j>=0 && v[j]>current){

               v[j+1]=v[j];                    
               j--;

          }

          v[j+1]=current;
     
          }

          return ;
}
int main(){

     int n;
     cout<<"enter the value of n :" ;
     cin>>n;

     vector<int> v(n);
 
  cout<<"enter the elements in vector : ";

     for(int i=0; i<n; i++){

          cin>>v[i];

     }
   
   insertionsort(v);

   
     for(int i=0; i<n; i++){

          cout<<v[i]<<" ";

     }
   
   return 0;
}