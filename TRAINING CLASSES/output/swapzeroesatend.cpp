#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter the value of n : ";
     cin>>n;
     string s = to_string(n);
     string even,odd;
     even= odd="";

     for(auto k: s){

          if(k=='0')
          odd+=k;
          else
          even+=k;

     }
     cout<<stoi(even+odd)<<endl;

     return 0;
}