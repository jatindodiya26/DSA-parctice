#include<iostream>
using namespace std;

int main (){

    int arr[2]={12, 13};

    int  *ptr=&arr[0];

    cout<<"adress is  "<<ptr;
    cout<<"\nvalue at adress : "<<*ptr;
    cout<<"\nvalue at next adres is : " <<*(ptr+1);
    cout<<"\n next adress value : "<<(ptr+1);


    cout<<"\n postincreament value ; "<<*ptr++;
     //cout<<*ptr++<<"\n";                      //first;y *ptr is clacculateed
       cout<<"\nvalue of  ptr : "<<ptr;

       cout<<"\n preincreament value : "<<++*ptr;           //++ is clacculateed first;
       cout<<endl;

       cout<<(*ptr)++;
       cout<<endl;                                //post increament value


       cout<<arr[0]<<" "<<arr[1];                   //arr[0] is 15 now;

    return 0;


}