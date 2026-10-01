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

    // 👇 Function to merge two sorted linked lists
    Node* mergeSortedLists(Node* head1, Node* head2) {

        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;

        Node* dummy_head= new Node(-1); // Dummy node to simplify the merge process
        Node* ptr1 = head1;
        Node* ptr2 = head2;
        Node* ptr3 = dummy_head;

        while(ptr1 != NULL && ptr2 != NULL){
            if(ptr1->value < ptr2->value){
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
            }
            else{
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
            }
            ptr3 = ptr3->next;
        }

        if(ptr1 != NULL){
            ptr3->next = ptr1;
        }else{
            ptr3->next = ptr2;
        }
            return dummy_head->next; // Return the merged list, skipping the dummy node

     }
    void display() {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {

    LinkedList list1;
    list1.insertAtTail(1);
    list1.insertAtTail(3);
    list1.insertAtTail(5);

    LinkedList list2;
    list2.insertAtTail(2);
    list2.insertAtTail(4);
    list2.insertAtTail(6);

    LinkedList result;

    result.head = result.mergeSortedLists(list1.head, list2.head);

    cout << "Merged Sorted List: ";
    result.display();

    return 0;
}
