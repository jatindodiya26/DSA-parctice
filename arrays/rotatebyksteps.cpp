#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter the size of array";
cin>>n;

int arr[n];

for (int i=0; i<n; i++){
    cin>>arr[i];
}

int k;
cout<<"enter the steps from array needs to be rotated";
cin>>k;

k= k%n;
int ansarr[n];
int j=0;

for (int i=n-k; i<n; i++){  // last  k elemnets
    ansarr[j++]=arr[i];
}

for (int i=0; i<=k; i++){  // first  n - k elemnets
    ansarr[j++]=arr[i];
}

for (int i=0; i<n; i++){
    cout<<ansarr[i];
}
// cout<<ansarr;

return 0;
}