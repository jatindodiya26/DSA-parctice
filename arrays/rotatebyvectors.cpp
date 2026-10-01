#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
       v.push_back(1);
         v.push_back(2);
           v.push_back(3);
            v.push_back(4);
             v.push_back(5);

 int k=3;
//  cout<<"enter the value of k";
//  cin>>k;

 k=k%v.size();
 
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.end()+k);
    reverse(v.begin()+k, v.end());

 for(int a:v){

    cout<<a<<" ";

 }
cout<<endl;


}