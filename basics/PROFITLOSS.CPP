#include<iostream>
using namespace std;

int main(){

    int cp, sp;

    cout<<"enter the cp";
    cin>>cp;

        cout<<"enter the sp";
    cin>>sp;
    
if (sp>cp){

    cout<<"profit gained"<<endl;;
    cout<<sp - cp;

}

 else if (cp>sp){

    cout<<"loss incurred"<<endl;
    cout<<cp - sp;
    
}

else {

    cout<<"no profit no loss";
}




}