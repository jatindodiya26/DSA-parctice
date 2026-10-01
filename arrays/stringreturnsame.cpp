#include<iostream>
#include<cstring>
using namespace std;

int match(char str1[], int l1, char str2[], int l2,int k1, int k2){

string s1= string(str1,k1);
string s2= string(str2,k2);

if(s1.empty() && s2.empty())
            return 0;

   else if (s1.length() != s2.length())
            return -1;

       else if(s1==s2)
            return s1.length();

}

int main(){

            char str1[10]= "suceed";
            char str2[15]= "crossbreed";
              
              
        cout<<match(str1,4,str2,5,3,7);

        return 0;
}