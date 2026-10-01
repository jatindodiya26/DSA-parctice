#include<iostream>
#include<vector>
using namespace std;

void Countsort(vector<int> &v){
    
    int n= v.size();
    //finding max ekement
   int max_ele=0;


   for(int i=0; i<n; i++){

     max_ele=max(max_ele,v[i]);

   }

   //creatinh frequency array

   vector<int> freq(max_ele,0);

     for(int i=0; i<n; i++){
       
       freq[v[i]]++;

     }

     //calculating cumulative frequency
for(int i=0; i<max_ele; i++){

     freq[i]= freq[i-1];
     
}

//calculate sorted array

vector<int> ans(n);

for(int i=n-1; i>=0; i--){

     ans[--freq[v[i]]]=v[i];

}

// copying to origional array

for(int i=0; i<n; i++){

     v[i]= ans[i];

}
}

int main(){

     int n;
     cout<<"enter the  value of n ";
     cin>>n;

     vector<int> v(n);

     for(int i=0; i<n; i++){
          
          cin>>v[i];

     }

     Countsort(v);

     for(int i=0; i<n ; i++){
          cout<<v[i]<<" ";
     }
     return 0;
}