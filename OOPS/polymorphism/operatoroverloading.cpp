#include<iostream>
using namespace std;

class demo{

    int a, b;
    public:                                       //using friend fuction
    demo(int x=0 , int y=0){

      a=x;
      b=y;

    }


void show(){

  cout<<a<<" "<<b<<endl;
}
friend demo operator+(demo, demo);


};


demo operator+(demo d1, demo d2){

 demo d3;

 d3.a=d1.a+d2.a;
 d3.b= d1.b+d2.b;

return d3;

}

int main(){

demo d1(10,20);
demo d2(20,30);
demo d3;

d3=d1+d2;

d1.show();
d2.show();;
d3.show();



return 0;
}

// }
//  class demo{

//             public:
//               int x, y;

//   demo (int a=10, int b=20){

//       x=a;
//        y=b;

//         }
//                                                   //  using member function//
//  demo operator+(demo d2){

// demo d3;

// d3.x=this->x+d2.x;
//    d3.y= this->y+d2.y;
//    return d3;
//   }

//   void show(){

//     cout<< "x : "<<x<<"  "<<"y : "<<y<<endl;
//   }

//  };

//  int main(){
//  demo d1(10, 20);
//    demo d2(5,15);
//     demo d3;

//     d3=d1+d2;

//     d3.show();
    

//     return 0;

//  }