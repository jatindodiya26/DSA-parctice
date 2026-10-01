#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_palindrome(vector<int> v, int n){

     int m=9999;
     for(auto k:v){

          string s=to_string(k);
           reverse(s.begin(),s.end());
           if(k==stoi(s)){
               if(k<m){
                    m=k;
               }
           }
             
          
     }

     return m;
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
     cout<<find_palindrome(v,n);

     return 0;
}