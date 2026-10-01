#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value";
    cin>>n;
    int noofdigits=0;
    int origional_no = n;

    while (n>0)
    {
        n= n/10;
    noofdigits++;

    }

    cout<<"no of digits :"<< noofdigits;

    return 0;

}
