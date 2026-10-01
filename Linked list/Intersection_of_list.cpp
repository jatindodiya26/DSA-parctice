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

    int getlength(Node* head){
        Node* temp = head;
        int l = 0;
        while(temp != NULL){
            l++;
            temp = temp->next;
        }
        return l;
    }

    Node* moveheadbyk(Node *head, int k){
        Node *ptr = head;
        while(k--){
            ptr = ptr->next;
        }
        return ptr;
    }

    Node* get_intersection(Node *head1, Node* head2){
        Node* ptr1 = head1;
        Node* ptr2 = head2;

        int length1 = getlength(head1);
        int length2 = getlength(head2);

        if(length1 > length2){
            int k = length1 - length2;
            ptr1 = moveheadbyk(head1, k);
        }
        else {  
            int k = length2 - length1;
            ptr2 = moveheadbyk(head2, k);
        }

        while(ptr1 != NULL){
            if(ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return NULL;  // important fix
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
};


int main(){
    LinkedList ll1;
    for (int i = 1; i <= 7; i++) {
        ll1.insertionAtTail(i);
    }

    LinkedList ll2;
    for (int i = 1; i <= 10; i++) {
        ll2.insertionAtTail(i);
    }

    // Create intersection manually
    ll1.head->next->next = ll2.head->next->next->next;

    // Call using object
    Node* intersection = ll1.get_intersection(ll1.head, ll2.head);

    cout << "Intersection value = " << intersection->value << endl;

    return 0;
}
