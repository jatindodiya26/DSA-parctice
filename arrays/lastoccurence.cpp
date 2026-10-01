
#include<iostream>
using namespace std;


int lastoccurence(int arr [], int x, int n){

    int lastindex=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
         lastindex=i;
        }
    }

return lastindex;


}
int main()
{

int n;

cout<<"enter n";
cin>>n;

int arr[n];
cout<<"enter n elemnets";

for(int i=0; i<n; i++){
    cin>>arr[i];
}

int x;

cout<<"enter x";
cin>>x;

cout<<" last occurence of x is : "<<lastoccurence(arr, x,n);



}