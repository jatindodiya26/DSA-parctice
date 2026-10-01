#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int m,n,p;
cout<<"enter teh value of m n and p :";
cin>>m>>n>>p;
string x;

string r= to_string(m);
string s= to_string(n);
string t= to_string(p);

for(auto k:r){

auto U=find(s.begin(),s.end(),k);
auto V=find(t.begin(),t.end(),k);

if(U!=s.end() && V!=s.end()){
     x+=k;
}

}

cout<<stoi(x);
return 0;
}