#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end) {
    if (st >= end) return;

    int mid = (st + end) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, st, mid, end);
}

int main() {
    vector<int> arr = {8, 3, 2, 7, 4, 6, 8, 1};

    cout << "Before Sorting: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "After Sorting:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
// #include<iostream>
// using namespace std;


// void merge(int arr[], int l, int mid, int r){

// int an=mid-l+1;
// int bn= r-mid;

// int a[an];
// int b[bn];

// for(int i=0; i<an; i++){
//      a[i]=arr[l+i];
// }
// for(int j=0; j<bn; j++){
//      b[j]=arr[mid+1+j];
// }

// int i=0;
// int j=0; 
// int k=l;

// while(i<an && j<bn){
      
//       if(a[i]<b[j]){
//           arr[k++]=a[i++];
//       }
//       else{
//           arr[k++]=b[j++];
//       }
// }
// while(i<an){
//         arr[k++]=a[i++];
// }

// while(j<bn){
//        arr[k++]=b[j++];
// }

// return;
// }
// void mergesort(int arr[], int l, int r){

//      if(l>=r)
//      return;

//      int mid=(l+r)/2;
//      mergesort(arr, l, mid);
//      mergesort(arr,mid+1,r);
//      merge(arr,l,mid,r);
// }
// int main(){

//     int arr[]= {10,20,4,32,54,33,2,13,4};

//     int n= sizeof(arr)/sizeof(arr[0]);
    
//     mergesort(arr,0, n-1);

//     for(int i=0; i<n; i++){

//      cout<<arr[i]<<" ";

//     }

//      return 0;

// }