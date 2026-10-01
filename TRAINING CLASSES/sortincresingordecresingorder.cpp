#include<iostream>
#include<algorithm>
using namespace std;

int main(){

       int n;
       cout<<"enter the value of n :";
       cin>>n;

       string s=to_string(n);
       sort(s.begin(),s.end());
       cout<<"increasing order "<<stoi(s)<<endl;

      sort(s.begin(),s.end(), greater<char>());
       cout<<"decresing order"<<stoi(s);

       

     return 0;
}