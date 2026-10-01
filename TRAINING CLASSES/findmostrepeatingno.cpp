#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findno(vector<int>v,int n){

     vector<int>Q;
     for(auto k:v){
          string s=to_string(k);
         auto t= find(s.begin(),s.end(),'5');

     if(t!=s.end())
       Q.push_back(k);
     }
     return Q;
}
int main(){
     int n;
     cout<<"enter the value of n : ";
     cin>>n;

     vector<int>v(n);
     cout<<"enter the value in the vector :";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
     vector<int>Q=findno(v,n);
     for(auto k:Q){
          cout<<k<<" ";     
     }
}
