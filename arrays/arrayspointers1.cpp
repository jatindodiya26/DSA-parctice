#include<iostream>
using namespace std;

int main(){


    int arr[3]={10, 11, 12};

    int (*p)[3]= &arr;

    cout<<p<<" "<<arr<<" "<<*p<< " "<< *arr;

    return 0;
}

























// void process(int *arr, int n){


//     for(int i=0; i<n; i++){

//         cout<<*(arr+i)<<" ";

//     }
// }

// int main(){

//  int arr[3]={10,11,12};

//  process(arr, 3);

//  return 0;
 


// }