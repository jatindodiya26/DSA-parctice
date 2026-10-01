#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n;
cout<<"enter the value of n: ";
cin>>n;

vector<int> v(n);

for(int i=0; i<n; i++){
     cin>>v[i];
}
int m=*max_element(v.begin(),v.end());
cout<<m<<endl;

int nm=*min_element(v.begin(),v.end());
cout<<nm<<endl;

cout<<m-nm<<endl;

     return 0;
}