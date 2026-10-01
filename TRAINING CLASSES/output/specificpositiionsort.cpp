#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter the value of n : ";
     cin>>n;

     string s= to_string(n);

     sort (s.begin(), s.begin()+2);

     cout<<stoi(s)<<endl;

     sort(s.end()-2, s.end(), greater<char>());

     cout<<stoi(s);

     return 0;
}