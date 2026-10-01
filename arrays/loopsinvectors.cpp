#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;
for (int i=0; i<5; i++){

int element;
cin>>element;

v.push_back(element);

}

//for loop

for(int i=0; i<v.size(); i++){

cout<<v[i]<<" ";

}

cout<<endl;

v.insert(v.begin()+2, 8);                     //inserting an element

//for each loop

for(int ele: v){

    cout<<ele<<" ";

}
cout<<endl;

v.erase(v.end()-2);                        //erasing an element

//while loop

int i=0;

while (i<v.size())
{
    cout<<v[i++]<<" ";
}
cout<<endl;
}