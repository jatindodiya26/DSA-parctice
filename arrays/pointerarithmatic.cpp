#include<iostream>
#include<conio.h>
using namespace std;

int firstlastindex(string s, char ch, int *pf, int *pl){

        for(int i=0; i<s.length(); i++){

            if(s[i]==ch){
                       *pf=i;
                       break;
            }
}

for(int i=s.size()-1; i>=0; i--){


    if (s[i]==ch){

        *pl=i;
        break;
    }
}
return (*pl, *pf);

}



int main(){

string s= "jatinsinghdodiya";
char ch;

cout<<"enter the character : ";
cin>>ch;

int f=-1;
int *pf=&f;

int l=-1;
int *pl=&l;

cout<<firstlastindex(s, ch, pf,pl)<<"\n";

return 0;


}