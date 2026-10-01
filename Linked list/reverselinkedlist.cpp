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

    void reverseList() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }
};

int main() {
    LinkedList ll;
    for (int i = 1; i <= 7; i++) {
        ll.insertAtTail(i);
    }

    cout << "Original List:\n";
    ll.display();

    ll.reverseList();

    cout << "Reversed List:\n";
    ll.display();

    return 0;
}
