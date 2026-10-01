#include<bits/stdc++.h>
#include<stack>
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
    vector<int> postorder(Node* root){
        vector<int> result;
        if(root==NULL)
            return result;

        stack<Node*> st1, st2;
        st1.push(root);

        while(!st1.empty()){
            Node* current=st1.top();
            st1.pop();
            st2.push(current);

            if(current->left!=NULL)
                st1.push(current->left);
            if(current->right!=NULL)
                st1.push(current->right);
        }

        while(!st2.empty()){
            result.push_back(st2.top()->data);
            st2.pop();
        }

        return result;
    }
};