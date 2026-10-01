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
        Node* lastvisited=NULL;

        while(current!=NULL ||!st.empty()){

          if(current!=NULL){
              st.push(current);
              current=current->left;
          }
          else{
              Node* peeknode=st.top();
              if(peeknode->right!=NULL && lastvisited!=peeknode->right){
                  current=peeknode->right;
              }
              else{
                  result.push_back(peeknode->data);
                  lastvisited=peeknode;
                  st.pop();
              }
          }
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
     vector<int> postorderTraversal = sol.inorder(root);
     
     cout << "Postorder Traversal: ";
     for(int val : postorderTraversal){
          cout << val << " ";
     }
     cout << endl;
     
     return 0;
}