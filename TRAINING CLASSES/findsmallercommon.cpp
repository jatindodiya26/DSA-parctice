#include<iostream>
#include<algorithm>
using namespace std;

int RR(string a , string b){

     string x="";
     for(auto k:a){

          auto T=find(b.begin(),b.end(),k);
          if(T!=b.end());
          else
          x+=k;

     }
     return stoi(x);
}
int main(){

     int n,m;
     cout<<"enter m nd n : ";
     cin>>n>>m;
     string p=to_string(n);
     string q=to_string(m);

     int x=RR(p,q);
     int y=RR(q,p);

     if(x<y)
     cout<<x;
     else
     cout<<y;
     return 0;
     
     }