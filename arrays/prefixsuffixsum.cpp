#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"enter size of array : ";
 cin>>n;

int arr[n];
cout<<"enter n elements";

for(int i=0; i<n; i++){

    cin>>arr[i];

}

int totalsum=0;

for(int i=0; i<=n; i++){

    totalsum+= arr[i] ;

}

int prefixsum=0;

for (int i=0; i<n ;i++){

    prefixsum+=arr[i];

int suffixsum=totalsum-prefixsum;

if(prefixsum==suffixsum){

    cout<<"equal";

break;
}
else {
    cout<<"unequal";
    break;
}


}

}