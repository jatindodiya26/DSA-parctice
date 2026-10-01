#include<iostream>
using namespace std;

class circle{
public:
float radius;
float area;
void calculatearea(){

cin>>radius;
  area = 3.14*radius*radius;
}
   void showarea(){
     cout<<"area of circle is"<<area<<endl;
   }
};

int main(){
  circle c1;

  c1.calculatearea();
  c1.showarea();

  return 0;
}
  



