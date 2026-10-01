#include <iostream>
 using namespace std;
int main(){

  char ch;

  cout<<"enter the character"<<endl;
  cin>>ch;

  switch(ch){

       
     case 'a': case 'A':
        case 'e': case 'E':
         case 'i': case 'I':
           case 'o': case 'O':
              case 'u': case 'U':


       cout<<"vowel"<<endl;
       break;

    default: cout<<"consonant"<<endl;
    break;
  }
  
}