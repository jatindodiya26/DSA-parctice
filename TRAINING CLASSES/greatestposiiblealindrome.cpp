#include<iostream>
#include<algorithm>
using namespace std;

int main(){
      int n;
      int m=0;
      cout<<"enter the value of n :";
      cin>>n;

      string s= to_string(n);

sort(s.begin(),s.end());

while(next_permutation(s.begin(),s.end())){

     cout<<s<<" ";

     // string t=s;

     // reverse(t.begin(),t.end());

     // if(t==s)
     // cout<<t;
     // m=max(m,stoi(s));
}

cout<<m;

     return 0;
}