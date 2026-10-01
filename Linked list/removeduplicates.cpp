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

    void insertAtTail(int val) {
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
    void display() {
     Node* temp = head;
     while (temp != NULL) {
         cout << temp->value << " -> ";
         temp = temp->next;
     }
     cout << "NULL\n";
 }


 void remove_dulicates(Node* &head){

     Node* curr_node=head;
     while((curr_node->value==curr_node->next->value)&&(curr_node->next!=NULL)){
          
          Node* temp=curr_node->next;
          curr_node->next=curr_node->next->next;
          free(temp);
     }

 }
};
int main() {
     
     LinkedList ll;
 
     // Sample data with duplicates
     ll.insertAtTail(1);
     ll.insertAtTail(2);
     ll.insertAtTail(3);
     ll.insertAtTail(2);
     ll.insertAtTail(4);
     ll.insertAtTail(1);
     ll.insertAtTail(5);
 
     cout << "Original List:\n";
     ll.display();
 
     ll.remove_dulicates(head);

     cout << "After Removing Duplicates:\n";
     ll.display();
 
     return 0;
 }