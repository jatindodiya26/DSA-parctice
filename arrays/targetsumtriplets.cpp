#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter size of array";
cin>>n;

int arr[n];

cout<<"enter the elements in the array";

for(int i=0; i<n; i++){

    cin>> arr[i];

}

int targetsum;
int ans=0;

cout<<"enter the tagetsum";
cin>>targetsum;

for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

                    for(int k=j+1; k<n; k++){


                    if( arr[i]+ arr[j] + arr[k]== targetsum){

                                 ans++;

                             }

                          }

          }

}

cout<<"targetsum is : "<<ans;

return 0;

}