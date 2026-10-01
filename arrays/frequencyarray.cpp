#include<iostream>
#include<vector>
using namespace std;

int main(){

int n;
cout<<"enter size";
cin>>n;

vector<int> v(n);

cout<<"enter the elemnt";

for(int i=0; i<n; i++){

cin>>v[i];

}

const int N = 1e5+10;
vector<int> freq(N,0);

for(int i=0; i<n; i++){

freq[v[i]]++;

}

int query;
cout<<"enter queries number";
cin>>query;

while(query--){
int queryelement;
cout<<"enter query element";
cin>>queryelement;


cout<<freq[queryelement];
}

return 0;
}