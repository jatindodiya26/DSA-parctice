#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter tyhe value od n";
     cin>>n;
      
      string s1="";

     string s= to_string(n);

     for(auto k:s){
        
        s1=k+s1;


     }
        cout<<" "<<stoi(s1);

     //    if(n==stoi(s1))
     //    cout<<"palindrome";
     //    else
     //    cout<<"not palindrome";
     
     return 0;
}