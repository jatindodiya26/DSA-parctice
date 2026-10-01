#include<iostream>
using namespace std;
int f(int *arr, int idx, int n){

    if(idx==n-1) return arr[idx];

    return  f(arr,idx+1, n);

}
int main(){

    int n=5;
    int arr[n]={1,2,3,4,5};
    cout<<f(arr,0,n);
    return 0;
}