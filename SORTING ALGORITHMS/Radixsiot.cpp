#include<iostream>
#include<vector>
using namespace std;


void Countsort(vector<int>& v, int pos){

int n=v.size();
vector<int> freq(10,0);

     for(int i=0; i<n; i++){
       
       freq[(v[i]/pos)%10]++;

     }


     //calculating cumulative frequency
for(int i=0; i<10; i++){

     freq[i]= freq[i-1];
     
}

//calculate sorted array

vector<int> ans(n);

for(int i=n-1; i>=0; i--){

     ans[--freq[(v[i]/pos)%10]]=v[i];

}

// copying to origional array

for(int i=0; i<n; i++){

     v[i]= ans[i];

}

}
void Radixsort(vector<int>& v){


     int max_ele=0;
    
   for(int i=0; i<v.size(); i++){

     max_ele=max(max_ele,v[i]);

   }


     for(int pos=1; max_ele/pos >0; pos*=10){

          Countsort(v,pos);

     }

     return;
}
int main(){
     int n;
     cout<<"enter the value of n :";
     cin>>n;

     vector<int> v(n);
     for(int i=0; i<n; i++){

     cin>>v[i];

     }
     Radixsort(v);

     for(int i=0; i<n; i++){

          cout<<v[i]<<" ";
     }

     return 0;
}