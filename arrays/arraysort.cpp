#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter size of array : ";
cin>>n;

int arr[n];

cout<<"enter the elements \n";

for (int i=0;i<n; i++){

cin>>arr[i];


}

cout<<"array is : ";


for (int i=0;i<n; i++){

cout<<arr[i]<<" ";


}

int x;
int ans=-1;

cout<<"enter the elemnet to search"<<endl;
cin>>x;


for (int i=0;i<n; i++){

if(arr[i]==x){
    ans=i;
        return ans;


}
else{

    return 0;
}


}
return 0;

}



