#include<iostream>
using namespace std;

int main(){

int m, n;

cout<<"enter the values of rows and cols ";
cin>>m>>n;

for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){

        if((i+j)%2==0){

            cout<<"2 ";
        }
        else{
            cout<<"1 ";
        }
    }
    
    cout<<" ";
    
}
    cout<<" ";

}