#include<iostream>
#include<vector>
using namespace std;
// Repeatedly swaps adjacent and eLEMENTs if they are in a wrong order
void bubblesort(vector<int> &v){   //time complexity : o(n2)
     
int n=v.size();

for(int i = 0; i < n-1; i++){

     for(int j=0; j <n-i-1; j++){   

          if(v[j]>v[j+1]){
          swap(v[j],v[j+1]);
     }
}
}
return ;
}
int main(){
int n;
cout<<"enter n";
cin>>n;

vector<int> v(n);

cout<<"enter  elements in a vector";

for(int i=0; i<n; i++){

     cin>>v[i];

}

bubblesort(v);

cout<<"sorted array is : ";

for(int i=0; i<n; i++){

     cout<<v[i]<<" ";

}

     return 0;
}