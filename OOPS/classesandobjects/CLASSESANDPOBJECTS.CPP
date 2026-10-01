#include <iostream>
using namespace std;

class Student
{
    
public:

int roll_no;

float CGPA;

string name;

    
};

int main(){


Student s;

s.name="jatin";

s.roll_no=12;

s.CGPA=3.3;

Student s1;


s1.name="govind";

s1.roll_no=99;

s1.CGPA=3.9;

cout<<s.name<<endl<<s.roll_no<<endl<<s.CGPA<<endl;

cout<<s1.name<<endl<<s1.roll_no<<endl<<s.CGPA<<endl;


}