#include<iostream>
using namespace std;

int main(){

int num;

cout<<"enter the number";
cin>>num;

int ans=0;
while(num>0){
    ans = ans*10 + num%10;
    num /=10;
                                //reverse
}
cout<<"reverse order is : "<< ans;


}

// while (num>0){

//     int remainder = num%10;
//     num/=10;

//     cout<<remainder<<"  ";
// }                             reverse with spaces
// return 0; }
