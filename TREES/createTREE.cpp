#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//preorder Traversal
void preorder(Node* root) {
    if(root == NULL)
        return;
    
        cout << root->data << " ";
        preorder(root->left);
    preorder(root->right);
}

//postorder Traversal
void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    // Creating the binary tree
    Node* root = new Node(1);                  //      1
    root->left = new Node(2);                //    2       3
    root->right = new Node(3);              //   4   5
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "Preorder Traversal: ";
    preorder(root);

    cout << "Postorder Traversal: ";
    postorder(root);

    return 0;
}
