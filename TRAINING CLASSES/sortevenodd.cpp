#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"entr the value of n : ";
     cin>>n;
     string s = to_string(n);
     string even,odd;

     even=odd="";

     for(auto k: s){

          if((int)k%2)
          odd+=k;
          else
          even+=k;

     }

     cout<<stoi(even+odd);

     return 0;
}