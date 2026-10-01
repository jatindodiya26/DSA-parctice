// #include<iostream>
// using namespace std;
// class Node{
//      public:
//      int value;
//      Node* next;

//      Node(int data){
//           value=data;
//           next=NULL;
//         }
// };

// class linkedlist{

// public:
// Node* head;

// linkedlist(){
//      head=NULL;
// }

// void insertionathead(Node* &head,int val){
     
//      Node* new_node=new Node(val);
//      new_node->next=head;
//      head=new_node;
// }


// void insertionattail(Node* &head,int val){
     
//      Node* new_node=new Node(val);
//      Node* temp=head;
//      while(temp->next!=NULL){
//           temp=temp->next;
//      }
//      temp->next=new_node;
// }

// void display(Node* head){

//      Node* temp=head;
//      while(temp->next!=NULL){
//           cout<<temp->value<<"->";
//           temp=temp->next;
//      }
//      cout<<"NULL";
// }

// void insertiionatarbitaryposition(Node*&head,int val,int pos){

//      if(pos==0){
//         insertionathead(head,val);
//         return;
//      }

//      Node* new_node=new Node(val);
//      Node* temp=head;
//      int curr_pos=0;

//      while(curr_pos!=pos-1){
//           temp=temp->next;
//           curr_pos++;
//      }

//      new_node->next=temp->next;
//      temp->next=new_node;
     

// }

// void deleteathead(Node* &head){
//      Node* temp=head;
//      head=head->next;
//      free(temp);
// }

// void deleteatttail(Node* &head){

//      Node* second_last=head;
//      while(second_last->next!=NULL){
//           second_last=second_last->next;
//      }
//      Node* temp=second_last->next;
//      second_last->next=NULL;
//      free(temp);

// }

// void deleteatarbitary(Node* &head,int pos){

//      if(pos==0){
//           deleteathead(head);
//           return;
//      }

// int curr_pos=0;
// Node*prev=head;
// while(curr_pos!=pos-1){
//      prev=prev->next;
//      curr_pos++;
// }
// Node* temp=prev->next;
// prev->next=prev->next->next;
// free(temp);

// }
// }



// int main(){

//    linkedlist ll;

//     ll.insertionathead(head,1);
// //     ll.display(head);
//      ll.insertionathead(head,2);
//      // ll.display(head);
//      ll.insertionattail(head,3);
//      // ll.display(head);
//      ll.insertionattail(head,4);
//      // ll.display(head);

//      int pos;
//      cout<<"enter the position";
//      cin>>pos;
     
//      ll.insertiionatarbitaryposition(head,5,pos);
//      ll.display(head);
//      cout<<endl;


// ll.deleteathead(head);
// ll.display(head);

// ll.deleteatttail(head);
// ll.display(head);

// ll.deleteatarbitary(head,pos);
// ll.display(head);

//      return 0;
// }

#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertionAtHead(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void insertionAtTail(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void insertionAtArbitraryPosition(int val, int pos) {
        if (pos == 0) {
            insertionAtHead(val);
            return;
        }

        Node* new_node = new Node(val);
        Node* temp = head;
        int curr_pos = 0;

        while (curr_pos != pos - 1 && temp != NULL) {
            temp = temp->next;
            curr_pos++;
        }

        if (temp == NULL) {
            cout << "Position out of bounds\n";
            delete new_node;
            return;
        }

        new_node->next = temp->next;
        temp->next = new_node;
    }

    void deleteAtHead() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtTail() {
        if (head == NULL) return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteAtArbitrary(int pos) {
        if (head == NULL) return;
        if (pos == 0) {
            deleteAtHead();
            return;
        }

        Node* prev = head;
        int curr_pos = 0;

        while (curr_pos != pos - 1 && prev->next != NULL) {
            prev = prev->next;
            curr_pos++;
        }

        if (prev->next == NULL) {
            cout << "Position out of bounds\n";
            return;
        }

        Node* temp = prev->next;
        prev->next = temp->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList ll;

    ll.insertionAtHead(2);
    ll.insertionAtHead(1);
    ll.insertionAtTail(3);
    ll.insertionAtTail(4);

    int pos;
    cout << "Enter the position: ";
    cin >> pos;

    ll.insertionAtArbitraryPosition(5, pos);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtArbitrary(pos);
    ll.display();

    return 0;
}
