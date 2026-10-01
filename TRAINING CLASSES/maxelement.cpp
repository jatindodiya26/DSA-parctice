#include<iostream>
#include<algorithm>
using namespace std;

int main(){

     int n;
     cout<<"enter the value of n :";
     cin>>n;

     string s = to_string(n);

     char x=*max_element(s.begin(),s.end());
        
     // s.erase(remove(s.begin(), s.end(),x));  // remove max eleemn6t

     // char y=*max_element(s.begin(),  s.end());    //find second max element from it;

     char y=*min_element(s.begin(),s.end());

       s.erase(remove(s.begin(), s.end(),(char)(x-y+48)),s.end());  // remove max eleemn6t
     

     cout<<stoi(s);

     return 0;
}