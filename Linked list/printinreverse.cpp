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

    void printReverse(Node* node) {
     if (node == NULL) return;        //Recursion case
     printReverse(node->next);
     cout << node->value << " -> ";
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

int main(){

     LinkedList ll;
     for (int i = 1; i <= 7; i++) {
          ll.insertAtTail(i);
      }
  
      cout << "Original List:\n";
      ll.display();

cout << "Reverse Printed List:\n";
ll.printReverse(ll.head);
cout << "NULL\n";

return 0;
     }
