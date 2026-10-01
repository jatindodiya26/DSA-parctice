#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

class Solution{
    public:
    vector<int> inorder(Node* root){
        vector<int> result;
        stack<Node*> st;

        Node* current=root;

        while(current!=NULL || !st.empty()){

            while(current!=NULL){
                st.push(current);
                current=current->left;
            }

            current=st.top();
            st.pop();
            result.push_back(current->data);
            current=current->right;
        }
        return result;
    }
};

int main(){
    // Creating Binary Tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;
    vector<int> inorderTraversal = sol.inorder(root);

    cout << "Inorder Traversal: ";
    for(int val : inorderTraversal){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}