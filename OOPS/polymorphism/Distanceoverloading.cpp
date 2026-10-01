#include<iostream>
using namespace std;

/// using member function
class Distance{

    int meteres,centimeters,millimeteres;

    public:
    
    Distance(){
    
    meteres=0;
    centimeters=0;
    millimeteres=0;

    };

 Distance(int meteres,int centimeters,int millimeteres){
    
    this->meteres=meteres;
   this->centimeters=centimeters;
   this->millimeteres=millimeteres;

    }

    Distance operator+(Distance D2){

        Distance temp;
        temp.meteres=meteres+D2.meteres;
        temp.centimeters=centimeters+D2.centimeters;
        temp.millimeteres=millimeteres+D2.millimeteres;
        return temp;

    }

    
    Distance operator-(Distance D2){

        Distance temp;
        temp.meteres=meteres-D2.meteres;
        temp.centimeters=centimeters-D2.centimeters;
        temp.millimeteres=millimeteres-D2.millimeteres;
        return temp;

    }
    
    void print(){

        cout<<meteres<<"metres"<<centimeters<<"centimeters"<<millimeteres<<"millimeteres"<<endl;

    }
};
    
    
 int main(){


        Distance d1(56,10,17);
        Distance d2(40,20,40);
        Distance d3=d1+d2;
        Distance d4= d1-d2;

        d1.print();
        d2.print();
        d3.print();
        d4.print();

        return 0;


 }