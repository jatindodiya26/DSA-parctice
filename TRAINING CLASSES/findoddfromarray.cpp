#include<iostream>
#include<vector>
using namespace std;

vector<int> findodd(vector<int> v,int n){

     vector<int>Q;
     vector<int>R;
     for(auto k:v){
          if(k%2!=0)            //for zeroes at right if(k==0)
             Q.push_back(k);

          else
            R.push_back(k);

     }

    Q.insert(Q.end(),R.begin(),R.end());

    return Q;
}
int main(){
   int n;
   cout<<"enter the value of n :";
   cin>>n;

   vector<int> v(n);
   cout<<"enter the values i n vector :";
   for(int i=0; i<n; i++){
     cin>>v[i];
   }
   cout<<"odd numbers are : ";
   vector<int> Q=findodd(v,n);

   for(auto k:Q){
     cout<<k<<" ";
   }
     return 0;
}