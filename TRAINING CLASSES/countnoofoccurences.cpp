#include<iostream>
#include<map>
using namespace std;

int main(){

     int n;
     cout<<"enter the value of n :";
     cin>>n;
     string s=to_string(n);

     map<char,int>f;

for(auto k:s){
     f[k]++;
}
for(auto k:f){
     cout<<k.first<<" "<<k.second<<endl;
}

return 0;
}
