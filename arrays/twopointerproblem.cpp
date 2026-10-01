#include<iostream>
using namespace std;


void swap(int arr[], int i, int j){
int temp;

arr[i]=temp;
arr[i]=arr[j];
arr[j]=temp;

}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++){

cin>>arr[i];

    }

    int left=0;
    int right= n-1;

    while(left<right){
    if(arr[left]==1 && arr[right]==0){
        swap(arr, left, right);
        left++;
        right--;
    }

if(arr[left]==0){

    left++;

}

if(arr[right]==1){

    right--;

}

}

for (int i=0; i<n; i++){

    cout<<arr[i]<<" ";
}
return 0;


}