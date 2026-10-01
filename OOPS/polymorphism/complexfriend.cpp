// #include<iostream>
// #include<cstring>
// using namespace std;

// class complex{
//      public:
//      int real,imag;
//      complex(){
//           real=0;
//           imag=0;
//      }                                          //----> revision for exam
//      complex(int r, int i){
//           real=r;
//           imag=i;
//      }

//  friend complex operator+(complex,complex);

//  void show(){
//      cout<<real<<"+i"<<imag<<endl;
//  }

// };


// complex operator+(complex c1,complex c2){

//      complex temp;
//      temp.real=c1.real+c2.real;
//      temp.imag=c1.imag+c2.imag;
//      return temp;
// }

// int main(){

//      complex c1(50,20);
//      complex c2(50,90);
//      complex c3;
//      c3=c1+c2;

//      c1.show();
//      c2.show();
//      c3.show();
   
//    return 0;
// }

// class superclass{

//      public:
//      virtual void show(){
//           cout<<"i am show from superclass"<<"\n";
//      }
//      virtual void display(){
//           cout<<"i am display from superclass"<<"\n";
//      }
// };
// class subclass:public superclass{

//      public:
//      void show(){
//           cout<<"i am show from subclass"<<"\n";
//      }
//      void display(){
//          cout<<"i am display from subclass"<<"\n";
//      }

// };

// int main(){
     
//      superclass *s,s1;
//      subclass s2;

//      s=&s1;
//      s->show();
//      s->display();

//      // s=&s2;
//      // s->show();
//      // s->display();

//      return 0;
// }


// class demo{
//      public:
//      int x;
//      demo(){
//           x=0;
//      }
//      demo(int a){
//           x=a;
//      }
//      demo(demo& obj){
//           x=obj.x;
//     }

//     void show(){
//      cout<<"x="<<x<<endl;
//     }

//    ~ demo(){
//      cout<<" i am the destroyer :";
//     }

// };

// int main(){

//      demo d1;
//      d1.show();

//      demo d2(200);
//      d2.show();

//      demo d3(d2);
//      d3.show();

//      return 0;
// }

// int main()
// {
// // Declaring a string object
// string str;
// cout<<"Enter a string: ";
// getline(cin,str);
// cout<<"You entered: "<<str<<endl;
// cout<<str.length()<<endl;
// return 0;
// }



// int main(){

//     char s1[]="jatin singh";
//     char s2[]="jatin dodiya";

//     if(strncmp(s1,s2,5)==0){
//      cout<<"s1 and s2 are equal"<<endl;
//     }
//     else{
//      cout<<"s1 and s2 are not equal"<<endl;
//     }
    
//     return 0;
// }


// int main() {
// string str1 = "Hello, ";
// string str2 = "World!";
// str1.append(str2);
// cout << "Appended string: " << str1 << endl;
// return 0;
// }



// int main() {
// string str1 = "apple";
// string str2 = "banana";
// int result = str1.compare(str2);
// cout << "Comparison result: " << result << endl;
// return 0;
// }

// int main() {
//     string str = "Hello, World!";
//     string substr = str.substr(7, 5); // Start at position 7, take 5 characters
//     cout << "Substring: " << substr << endl;
//     return 0;
//     }
    
// int main() {
//     string str = "Hello, World!";
//     size_t position = str.find("World");
//     cout << "Position of \"World\": " << position << endl;
//     return 0;
//     }
    
// int main() {
// string str = "Hello, World!";
// int position = str.rfind("o");
// cout << "Last position of 'o': " << position << endl;
// return 0;
// }

// int main() {
//     string str = "Hello, World!";
//     str.replace(7, 5, "Universe");
//     cout << "Modified string: " << str << endl;
//     return 0;
// // }    

// int main() {
//     string str = "Hello, World!";
//     char character = str.at(7);
//     cout << "Character at position 7: " << character << endl;
//     return 0;
//     }
    

// int main() {
//     string str = "Hello, World!";
//     str.resize(7); // Resize to 7 characters
//     cout << "Resized string: " << str << endl;
//     return 0;
//     }
    

// int main() {
//     string str = "Hello, World!";
//     str.insert(7, "Beautiful ");
//     cout << "Modified string: " << str << endl;
//     return 0;
//     }

// #include<iostream>
// #include<stdexcept>
// using namespace std;

// void checkage(int age){

//      if(age<=0)
//        throw invalid_argument("Age must be greater than 0");
// }

// int main(){

//      try{
//           checkage(-3);
//      }
//      catch(const invalid_argument& e){
//           cout<<"error : "<<e.what()<<endl;
// }

// return 0;

// }



// #include<iostream>
// using namespace std;

// void divide(int a, int b){
//      if(b==0){
//           throw"division by zero is error";
//      }
//      cout<<"result : "<<a/b<<endl;
// }

// int main(){

//      try{
//           divide(100,0);
//      }
//      catch(const char* msg){
//           cout<<"error : "<<msg<<endl;
//      }

//      return 0;
// }

// #include<iostream>
// #include<stdexcept>
// using namespace std;

// void exceptions(int value){

//      if(value==0){
//           throw runtime_error("value cant be 0");
//      }else if(value<0){
//           throw out_of_range("value cant be negative");
//      }else{
//           cout<<value<< endl;
//      }
// }

// int main(){

//      try{
//           exceptions(-1999);
//      }
//      catch(const runtime_error& e){
//           cout<<"errror :"<<e.what()<<endl;
//      }
//      catch( const out_of_range& e){
//           cout<<"errror :"<<e.what()<<endl;
//      }
    
//      return 0;
// }

// #include<iostream>
// #include<stdexcept>
// using namespace std;

// void causeerror (){
//      throw 42;
// }

// int main(){

//      try{
//           causeerror();
//      }
//      catch(...){
//           cout<<"unknown exception occured"<<endl;
//      }

//      return 0;
// }
// #include <iostream>
// #include <set>
// using namespace std;
// int main() {

// set<int> uniqueNumbers = {5, 3, 1, 4, 2, 3,6,4,244,4225,5,45,4};

// for (int num : uniqueNumbers) {

// cout << num << " ";

// }

// return 0;

// }

#include <iostream>
#include <map>
using namespace std;
int main(){

map<string, int> studentScores = {
{"Alice", 95},
{"Bob", 87},
{"Charlie", 92}
};                                     ----> mapping the inputs in the form of pairs
for (auto k : studentScores) {

     cout << k.first << ": " << k.second << endl;

}

return 0;

}


