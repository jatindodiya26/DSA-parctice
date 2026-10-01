#include<iostream>
using namespace std;

int reverse(int  n){
int rev=0;
for(int i=0; i<n; i++){

    rev= rev*10+n%10;
    n/=10;

}
return rev;
}
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<endl<<reverse(n);
    return 0;
}