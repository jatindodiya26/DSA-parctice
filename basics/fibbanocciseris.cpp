#include<iostream>
using namespace std;

int main(){

        int first=0,second=1;
        int n, nextterm;

        cout<<"enter the value of n : ";
        cin>>n;

        cout<<"fibbanocci series is :";
        cout<<first<<" "<<second;

        for(int i=2; i<n; i++){

            nextterm=first+second;
            first=second;
            second=nextterm;

            cout<<" "<<nextterm;

        }
    
    return 0;
    
}