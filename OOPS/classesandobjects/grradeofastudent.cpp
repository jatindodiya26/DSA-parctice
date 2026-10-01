#include <iostream>
#include <cstring>
using namespace std;

class Student{

    int roll_no;
    char name[35];
    float marks[5];

public:

    void getdata(int r , char n[]){

        roll_no = r;
        strcpy(name ,  n);

    }

void getmarks(float m[]){

    for(int i=0; i<5; i++){

            marks[i]=m[i];
    }
}

char calcGrade(){

float sum=0;

for(int i=0; i<5; i++){

    sum+=marks[i];

}

float per= (sum/500)*100;

if(per>=90){

    cout<<"A grade";

}
if(per>=80 && per<90){

    cout<<"B grade";
    
}
if(per>=70 && per<80){

    cout<<"C grade";
    
}
if(per>=60 && per<70){

    cout<<"D grade";
    
}
else{

    cout<<"fail";

}

}

};// class end

int main(){

Student obj;

int x;
cout<<"enter roll no: ";

cin>>x;

char y[30];

cout<<"enter name of student: ";

cin>>y;

obj.getdata(x,y);


float M[5];

cout<<"enter marks of a student: ";

for(int i=0; i<5; i++){

    cin>>M[i];
}

obj.getmarks(M);

char G = obj.calcGrade();

cout<<"student is paases with : "<<G;

return 0;

}