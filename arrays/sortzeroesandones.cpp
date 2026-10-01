#include<iostream>
using namespace std;

void sortzeroesandones(int arr,int  n)
{

int count= 0;

for(int i=0; i<n; i++){

    if(arr[i]==0){
        count++;
    }

}
for(int i=0; i<n; i++){

    if(i<count){
        arr[i]=0;
    }
else{
    arr[i]=1;
}

}





}




int main(){

int n;

cout<<"enter size of array";
cin>>n;

int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}

// int count=0;
// for(int i=0; i<n; i++){

//     if (arr[i]==0){

//         count++;

//     }

// }

// for(int i=0; i<n; i++){
// if(i<count){
//     arr[i]=0;
// }
// else{

//     arr[i]=1;

// }

// }

sortzeroesandones(arr, n);

cout<<"sorted array is : ";

for(int i=0; i<n; i++){

    cout<<arr[i]<<endl;
}

return 0;
}