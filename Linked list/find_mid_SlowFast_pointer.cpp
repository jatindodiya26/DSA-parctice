#include <iostream>
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

    // Insert node at tail
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Find mid using slow-fast pointer
    Node* findMiddle() {
        if(head == NULL || head->next == NULL)
            return head;

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;          // slow moves 1 step
            fast = fast->next->next;    // fast moves 2 steps
        }

        return slow;   // slow is now at middle
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {

    LinkedList ll;
    for(int i = 1; i <= 7; i++) {
        ll.insertAtTail(i);
    }

    ll.display();

    Node* mid = ll.findMiddle();
    cout << "Middle node is: " << mid->value << endl;

    return 0;
}
