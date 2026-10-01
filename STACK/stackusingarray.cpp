
// #include <iostream>
// using namespace std;

// class Stack {
//     int *arr;     // dynamic array
//     int top;      
//     int capacity; // max size of stack

// public:
//     // constructor
//     Stack(int size) {
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

//     // destructor
//     ~Stack() {
//         delete[] arr;
//     }

//     // push operation
//     void push(int x) {
//         if (isFull()) {
//             cout << "Stack Overflow! Cannot push " << x << endl;
//             return;
//         }
//         arr[++top] = x;
//         cout << x << " pushed into stack\n";
//     }

//     // pop operation
//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow! Nothing to pop\n";
//             return;
//         }
//         cout << arr[top--] << " popped from stack\n";
//     }

//     // return top element
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }
//         return arr[top];
//     }

//     // check if empty
//     bool isEmpty() {
//         return (top == -1);
//     }

//     // check if full
//     bool isFull() {
//         return (top == capacity - 1);
//     }

//     // display all elements
//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//         } else {
//             cout << "Stack elements: ";
//             for (int i = 0; i <= top; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// // Driver code
// int main() {
//     Stack s(5);  // stack of size 5

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60); // overflow

//     s.display();

//     cout << "Top element is: " << s.peek() << endl;

//     s.pop();
//     s.pop();
//     s.display();

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class stackk{

    int *arr;
    int capacity;
    int top;

    public:
    stackk(int size){
        capacity=size;
        arr=new int[capacity];
        top=-1;
    }

    void push(int x){
        if(isfull())
           cout<<"Stack Overflow!";
        
        arr[++top]=x;
        cout<<"X pushed into stack"<<x<<endl;

    }

    void pop(){
        if(isempty())
          cout<<"Stack Underflow!";

       cout<<arr[top--]<<"popped from stack !"<<endl;

    }

     int peek(){
       return arr[top];
    }

   bool isfull(){
      return (top==capacity-1); 
    }

   bool isempty(){
     return (top==-1);
   }

   void display(){
    if(top==-1){
       cout<<"Stack is empty";
    }
    else{
      for(int i=0; i<=top; i++){
        cout<<arr[i]<<endl;
      }
      cout<<"\n";
    }

   }
};

int main(){

    stackk st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();
    st.pop();

   cout<< st.peek()<<"top value\n";
   cout<< st.isempty()<<"khali...?\n";
   cout<<  st.isfull()<<"bhara hua...?";
    return 0;
}