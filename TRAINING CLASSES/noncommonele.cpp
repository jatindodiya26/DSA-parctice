#include<iostream>
#include<algorithm>
using namespace std;

int main(){
        
        int n,m;
        cout<<"enter the value  of m and n : ";
        cin>>n>>m;
        string h;
        string s=to_string(n);
        string t=to_string(m);

        for(auto k:s){

          auto U= find(t.begin(),t.end(),k);
          if(U==t.end())
          h+=k;
        }
    
     cout<<stoi(h);

     return 0;
}