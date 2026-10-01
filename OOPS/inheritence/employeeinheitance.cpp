#include<iostream>
#include<cstring>
using namespace std;

class employee{
                               //cpp training class
protected:

char name[30];
char eno[20];

public:
void getadata(){

strcpy(name, "jatin");
strcpy(eno, "0112AL231026");

}

void details(){

cout<<name<<" "<<eno<<endl;


}
};

class salary:public employee{

    public:

      int bp, hra, da, pf, np;

      void set(){

        cout<<"\n basic payment :";
        cin>>bp;

        cout<<"\nhuman resource allowance : ";
        cin>>hra;

        cout<<"\n dearness allowance : ";
        cin>>da;

        cout<<"\n profident fund :";
        cin>>pf;

      }

void calnetpayment(){

      np= bp+hra+da-pf;

      cout<<"\n net payment : ";


      cout<<np<<endl;
    

};

};


int main(){
 salary s;
 s.getadata();
 s.details();
 s.set();
 s.calnetpayment();

 return 0;

}

