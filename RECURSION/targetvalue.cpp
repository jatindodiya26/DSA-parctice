#include<iostream>
using namespace std;

bool f(int *arr, int n, int i, int x){

     if(i==n) return false;
     return ((arr[i]==x)||f(arr,n,i+1,x));

}

int main(){

     int arr[]={ 3,5,3,2,3,2,2};
     int n=7;
     int x=2;

     bool result=f(arr,n,0,x);
     if(result)
     cout<<"yes";
     else
     cout<<"no";

     return 0;
     
}