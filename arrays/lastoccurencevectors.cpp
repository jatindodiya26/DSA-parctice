#include<iostream>
#include<vector>
using namespace std;


int main(){

vector<int> v(5);

int element;
cout<<"enter element";

for(int i=0; i<5; i++){

cin>>element;
    
}
int ans=-1;

int x;
cout<<"enter x";
cin>>x;

for(int i=0; i<v.size()-1; i++){

    if(v[i]==x){

        ans=i;

    }


}

cout<<ans;

return 0;
}