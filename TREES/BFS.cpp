#include <iostream>
#include <queue>
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

class solution{
    public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if (root == NULL)
            return result;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < levelSize; i++) {
                Node* current = q.front();
                q.pop();
                currentLevel.push_back(current->data);

                if (current->left != NULL)
                    q.push(current->left);

                if (current->right != NULL)
                    q.push(current->right);
            }

            result.push_back(currentLevel);
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

    solution sol;
    vector<vector<int>> levels = sol.levelOrder(root);

    cout << "Level Order Traversal: " << endl;
    for (const auto& level : levels) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
// // Level Order Traversal
// void levelOrder(Node* root) {
//     if (root == NULL)
//         return;

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();

//         cout << current->data << " ";

//         if (current->left != NULL)
//             q.push(current->left);

//         if (current->right != NULL)
//             q.push(current->right);
//     }
// }

// int main() {
//     // Creating Binary Tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Level Order Traversal: ";
//     levelOrder(root);

//     return 0;
// }
