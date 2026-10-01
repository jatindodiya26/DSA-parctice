#include<iostream>
using namespace std;


int countoccurences(int arr [], int x, int n){

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
         count++;
        }
    }

return count;


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

cout<<"occurence of x is : "<<countoccurences(arr, x,n);

return 0;

}