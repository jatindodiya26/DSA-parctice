#include<iostream>
using namespace std;

// int largestElementindex(int arr[] , int n){


//  int max= 1;

// int maxindex=-1;

// for (int i=0; i < n; i++){

//           if ( arr[i]> max) {

//                 max= arr[i];
//                 maxindex =i;
                    

// }  
// return maxindex;

// }


//}


int second_largest(int arr[], int n){

int max= -1;
int second_max= -1;

for(int i=0; i<n; i++){

if(arr[i]>max){

max=arr[i];

}

}

for (int i=0; i<n; i++){

    if (arr[i]>second_max && arr[i]!=max){

        second_max=arr[i];

    }
}

return second_max;

}

int main(){
int n;
cout<<"enter size of array";

cin>>n;

int arr[n];

for (int i=0; i<n; i++){

cin>>arr[i];

}


// int indexoflargest= largestElementindex(arr, n);
//cout<<arr[indexoflargest];
//arr[indexoflargest]=-1;
//int indexofsecondlargest= largestElementindex(arr, n);
//cout<<arr[indexofsecondlargest];

cout<<second_largest(arr, n)<<endl;

return 0;

}