#include<iostream>
#include<vector>
using namespace std;

int gcd(int a, int b){
     while(a!=b){
          if(a>b)
         a-=b;
          else 
          b-=a;
     }
     return a;
}

int GCD(vector<int> v, int n){

     int result=v[0];
     for(int i=1; i<n; i++){
          result=gcd(result,v[i]);
     }
     return result;
}

int main(){
     int n;
     cout<<"enter the value of n :";
     cin>>n;

     vector<int> v(n);
     cout<<"enter the elements :";
     for(int i=0; i<n; i++){
          cin>>v[i];
     }
    cout<<"GCD of vector is : "<<GCD(v,n);

    return 0;

}