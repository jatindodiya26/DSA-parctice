#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class Solution{
public:
   vector<int>preorder(Node*root){

     vector<int> result;

     if(root==NULL)
           return result;

        stack<Node*>st;
        st.push(root);

     while(!st.empty()){

          root=st.top();
          st.pop();
          result.push_back(root->data);
          if(root->right!=NULL)
            st.push(root->right);
          if(root->left!=NULL)
            st.push(root->left);
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
    vector<int> preorderTraversal = sol.preorder(root);

    cout << "Preorder Traversal: ";
    for(int val : preorderTraversal){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}