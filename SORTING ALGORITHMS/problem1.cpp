#include<bits/stdc++.h>
#include<vector>
using namespace std;

// void sortzeroesatend(vector<int> &v,int n){

// for(int i=0; i<n-1; i++){

//      int j=0; 
//      bool flag=false;
//      while(j!=i){

//           if(v[i]==0 && v[j+1]!=0){

//                swap(v[i],v[j+1]);
//                flag =true;

//           }

//           j++;
//      }

    
//  if(flag = false) break;
// }
// }
// int main(){

// int n;
// cout<<"enter the value of n : ";
// cin>>n;

// vector<int> v(n);

// cout<<"enter the elements inna vector";
// for(int i=0; i<n; i++){

//      cin>>v[i];

// }

// sortzeroesatend(v , n);

// for(int i=0; i<n; i++){

//     cout<<v[i]<<" ";

// }
//      return 0;
// }

int main(){

     int n;
     cin>>n;

     string s=to_string(n);
     string z,nz;
     z=nz="";

     for(auto k :s){
       if(k=='0'){
          z+=k;
       }
      else{
        nz+=k;
      }
     }

        cout<<nz+z;
     return 0;
}