#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;


cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();

v.push_back(3);
cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();

v.push_back(8);
cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();

v.push_back(9);
cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();

v.resize(11);
cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();


v.pop_back();
cout<<"size: "<<v.size()<<endl;
cout<<"\tcapacity "<<v.capacity();


}
