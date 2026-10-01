#include<iostream>
using namespace std;

int pow_recursive(int p, int q){


if(q==0) return 1;
if(q%2==0){
     int result= pow_recursive(p,q/2);
     return result*result;
}
else{
     int result=pow_recursive(p,(q-1)/2);
     return result*result*p;
}
}

int f(int n, int d){

     if(n==0) return 0;
     return pow_recursive(n%10,d)+f(n/10,d);

}
int main(){
     int n ;
     cout<<"enter n";
     cin>>n;
     int digit=0;
     int temp=n;

     while(temp>0){

          temp/=10;
          digit++;
     }
     int result=f(n,digit);

     if(result==n){
          cout<<"yes it is armstrong no!"<<endl;
     }
     else{
          cout<<"not a armstrong n0!"<<endl;
     }

     return 0;
}