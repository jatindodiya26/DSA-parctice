#include<iostream>
using namespace std;
class Node{
     public:
     int value;
     Node* next;

     Node(int data){
          value=data;
          next=NULL;
        }
};
int main(){
      Node *n= new Node(1);
      Node *n1= new Node(3);
      cout<<n->value<<" "<<n->next<<" ";
      cout<<n1->value<<" "<<n1->next;
     return 0;
}