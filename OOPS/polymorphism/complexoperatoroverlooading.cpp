#include<iostream>
using namespace std;


// using friend function----->>

class Complex{
     int real, imag;

     public:
     Complex(){
          real=0; 
          imag=0;
     }
     Complex(int r, int i){
          real=r; 
          imag =i;

     }

      void show(){
     cout<<real<<"+i"<<imag<<endl;
    }


friend  Complex operator+(Complex , Complex);

};
  
    Complex operator+(Complex c1,Complex c2){

      Complex temp;
      temp.real= c1.real+c2.real;
      temp.imag=c1.imag+c2.imag;
      return temp;

    }



int main(){

     Complex c1(10,20);
     Complex c2(20,30);

     Complex c3;
     c3=c1+c2;
     
     c1.show();
     c2.show();
     c3.show();
     return 0;
}


// using member function----->>
// class Complex{
//      int real, imag;

//      public:
//      Complex(){
//           real=0; 
//           imag=0;
//      }
//      Complex(int r, int i){
//           real=r; 
//           imag =i;

//      }
//     Complex operator+(Complex c){

//       Complex temp;
//       temp.real= real+c.real;
//       temp.imag=imag+c.imag;
//       return temp;

//     }

//     void show(){
//      cout<<real<<"+i"<<imag<<endl;
//     }

// };

// int main(){

//      Complex c1(10,20);
//      Complex c2(20,30);

//      Complex c3;
//      c3=c1+c2;
     
//      c1.show();
//      c2.show();
//      c3.show();
//      return 0;
// }