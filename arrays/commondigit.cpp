#include<iostream>
using namespace std;

int commomndigit(int arr1[], int n1, int arr2[], int n2){
 
 int count = 0;
 for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++){

        if(arr1[i]==arr2[j]){
            count ++;

        }
 }

}
return count;
}

int main(){

    int n1, n2;
    cout<<"enter the value of n1\n";
    cin>>n1;                                  
    int arr1[n1];

    for(int i=0; i<n1; i++){
        cin>>arr1[i];

}
cout<<"enter the value of n2\n";
    cin>>n2;

    int arr2[n2];
       for(int i=0; i<n2; i++){
        cin>>arr2[i];
       }


       cout<<"common didgit is: "<<commomndigit(arr1,n1,arr2,n2)<<endl;

       return 0;
}