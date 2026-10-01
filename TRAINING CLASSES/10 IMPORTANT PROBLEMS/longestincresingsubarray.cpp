#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int m=0; 
int count=1;
vector<int>v(n);
cout<<"enter the elements : ";
for(int i=0; i<n; i++){
     cin>>v[i];
}

for(int i=1; i<n; i++){
     if(v[i-1]<v[i]){
          count++;
     }
     else{
          m=max(m,count);
          count=0;
     }
}
cout<<m;
}