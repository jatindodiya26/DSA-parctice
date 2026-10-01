#include<iostream>
using namespace std;

int S(int n){
    int sq, sum=0;
    for(int i=1; i<n; i++){

        if(n%i==0){
            sq=i*i;

            if(sq<=4*n){

                sum+=sq;

            }
        }
    }

    return sum;
}
int main(){

        int n;
        cout<<"enter the value of n";
        cin>>n;

        cout<<"sumofdivisor is : "<<S(n)<<endl;

        return 0;


}