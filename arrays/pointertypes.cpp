#include<iostream>
using namespace std;

int main (){

    //types of pointers 

    // int *ptr;                    //wild pointer -> just only declared and it is poiting to some random adress 
    // cout<<ptr<<" "<<*ptr;

    //  int *ptr= NULL;
    //  cout<<ptr<<" ";       // null pointer -> just declared and can be initialized later

    // int *ptr= NULL;
    // {
    //     int x=10;
    //        ptr = &x;     // dangling pointer -> point to a memory location which does not exist;

//     }
// cout<<ptr<<" ";

// }


float f=10.4;
int x=10;

void *ptr=&f;
 ptr=&x;

 cout<<" can not be accesd direcrtly use typecasting to acess";
 cout<<endl;

//  int *integerpointer= (int *)ptr;
//  cout<<"\n "<<*integerpointer<<endl;

 return 0;
}