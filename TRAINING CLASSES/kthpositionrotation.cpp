#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     
     int n;
     cout<<"enter the value of n : ";
     cin>>n;
     string s= to_string (n);
     int k;
     cout<<"enter the value of kth positiion :";
     cin>>k;

     reverse(s.begin(), s.end());
     reverse(s.begin(), s.begin()+k);
     reverse(s.begin()+k,s.end());

     cout<<stoi(s);
      

     return 0;
}