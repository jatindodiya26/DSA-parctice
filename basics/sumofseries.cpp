#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number";
    cin>>n;

    int ans=0;

    for(int i=0; i<n; i++){

if (i%2==0)
{

    ans = ans -i;
    
}

else{

        ans = ans +i;

}

cout<<ans;

    }
}