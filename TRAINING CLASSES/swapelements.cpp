#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter the vakue of n :";
     cin>>n;
     string s = to_string (n);

     swap(s[0],s[3]);

     cout<<stoi(s);

     return 0;
}