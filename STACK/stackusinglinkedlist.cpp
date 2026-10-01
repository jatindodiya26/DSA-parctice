#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;
};

// Stack class
class Stack {
    Node* top;

public:
    // constructor
    Stack() {
        top = nullptr;
    }

    // push operation
    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << x << " pushed into stack\n";
    }

    // pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop\n";
            return;
        }
        cout << top->data << " popped from stack\n";
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    // peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return top->data;
    }

    // check empty
    bool isEmpty() {
        return (top == nullptr);
    }

    // display stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.pop();
    s.display();

    s.pop();
    s.pop(); // underflow

    return 0;
}
