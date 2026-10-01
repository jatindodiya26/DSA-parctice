#include<iostream>
using namespace std;

int gcd(int a, int b){

     if(b>a) return gcd(b,a);        //--> id b is greater than then swap and then return gcd
     if(b==0) return a;       //--> Base case
     return gcd(b,a%b);      //--> self work to do or recurrence solution

}
int main(){

     cout<<gcd(40,48);
     return 0;
}