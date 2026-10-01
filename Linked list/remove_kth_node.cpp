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

    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void removeKthFromEnd(int k) {
        Node* slow = head;
        Node* fast = head;

        // Move fast pointer k steps ahead
        for(int i = 0; i < k; i++){
            if(fast == NULL) return; // k is larger than list length
            fast = fast->next;
        }

        // If fast becomes NULL, we need to remove the head
        if(fast == NULL){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Move both pointers until fast reaches the last node
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        // Now slow->next is the target node
        Node* deleteNode = slow->next;
        slow->next = slow->next->next;
        delete deleteNode;
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

    // Example list: 1 -> 2 -> 3 -> 4 -> 5
    for(int i = 1; i <= 5; i++){
        ll.insertAtTail(i);
    }

    cout << "Original list: ";
    ll.display();

    int k = 2;
    ll.removeKthFromEnd(k);

    cout << "After removing " << k << "-th node from end: ";
    ll.display();

    return 0;
}
