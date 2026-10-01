#include <iostream>
#include <stack>
using namespace std;
 
int main() {
    stack<int> st;

    // push elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; // 30

    st.pop(); // removes 30

    cout << "Top element after pop: " << st.top() << endl; // 20

    cout << "Stack size: " << st.size() << endl; // 2

    if(st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}
