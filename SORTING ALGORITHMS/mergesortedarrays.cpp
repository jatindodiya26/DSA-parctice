 #include<iostream>
 #include<vector>
 using namespace std;

 void merge(int arr1[], int m, int arr2[],int n,int arr[]){

     int a=0;
     int b=0;
     int c=0;

     while(a<m && b<n){
          if(arr1[a]<arr2[b]){
               arr[c++]=arr1[a++];
          }
          else{
               arr[c++]=arr2[b++];
          }
     }

     while(a<m){
          arr[c++]=arr1[a++];
     }

     while(b<n){
          arr[c++]=arr2[b++];
     }

 }
 int main(){

     int m,n;
     cout<<"enter the value of m and n;";
     cin>>m>>n;

     int arr1[m];
     int arr2[n];

     int mn=m+n;
     int arr[mn];

     cout<<"enter the arr1 elements :";

     for(int i=0; i<m; i++){
           cin>>arr1[i];
            }
  cout<<"enter the arr3 elements :";

     for(int j=0; j<n; j++){
          cin>>arr2[j];
            }

       merge(arr1,m,arr2,n,arr);

      cout<<"final lists :";    
       
     for(int k=0; k<mn; k++){
          cout<<arr[k]<<" ";
            }


     return 0;
 }