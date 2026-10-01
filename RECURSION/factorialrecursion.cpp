#include<iostream>
using namespace std;

int f(int n ){

    if(n==1)
    return n;

    return n*f(n-1);

}

int main(){

    int result=f(9);
    cout<<result<<endl;
    return 0;
}