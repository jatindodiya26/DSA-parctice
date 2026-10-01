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
};

bool areEqual(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->value != temp2->value) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return temp1 == NULL && temp2 == NULL;
}

int main() {
    LinkedList list1, list2;

    list1.insertAtTail(1);
    list1.insertAtTail(2);
    list1.insertAtTail(3);

    list2.insertAtTail(1);
    list2.insertAtTail(2);
    list2.insertAtTail(3);

    cout << "List 1: ";
    list1.display();

    cout << "List 2: ";
    list2.display();

    if (areEqual(list1.head, list2.head)) {
        cout << "The two linked lists are equal.\n";
    } else {
        cout << "The two linked lists are NOT equal.\n";
    }

    return 0;
}
