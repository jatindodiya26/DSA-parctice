#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int prime(int n){

     for(int i=2; i<sqrt(n); i++){
          if(n%i==0)
            return 0;
     }
     return 1;
}
int primesum(vector<int> v,int n){

     int sum=0;
     for(auto k:v){

          if(prime(k))
             sum+=k;
     }
     return sum;
}
int main(){

     int n;
     cout<<"enter tttttttthe valuee of n : ";
     cin>>n;

     vector<int>v(n);

     for(int i=0; i<n; i++){
          cin>>v[i];
     } 
     cout<<primesum(v,n);

     return 0;
}