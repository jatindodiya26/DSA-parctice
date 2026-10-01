#include<iostream>
#include<algorithm>
using namespace std;

int main(){
     int n,k;
     cout<<"enter n : ";
     cin>>n;

     cout<<"enter the value of k the position : ";
     cin>>k;

     string s=to_string(n);

     sort(s.begin(), s.begin()+k);

     cout<<stoi(s);

     sort(s.end()+k, s.end());

     cout<<stoi(s);



     return 0;
}