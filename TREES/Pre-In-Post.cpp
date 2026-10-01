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
    vector<int> PreInPost(Node* root){

     stack<pair<Node*,int>> st;
     st.push({root,1});

     vector<int> preorder;
     vector<int> inorder;     
     vector<int> postorder;

     if(root==NULL)
           return preorder;
           
     auto it=st.top();
     st.pop();

     if(it.second==1){
         preorder.push_back(it.first->data);
         it.second++;
         st.push(it);

         if(it.first->left!=NULL){
             st.push({it.first->left,1});
         }
     }
     else if(it.second==2){
         inorder.push_back(it.first->data);
         it.second++;
         st.push(it);

         if(it.first->right!=NULL){
             st.push({it.first->right,1});
         }
     }
     else{
         postorder.push_back(it.first->data);
     }
return preorder;
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
    vector<int> preorderTraversal = sol.PreInPost(root);

    cout << "Preorder Traversal: ";
    for(int val : preorderTraversal){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}