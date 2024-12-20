#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Preorder Traversal (Root -> Left -> Right)
void preorderTraversal(Node* root) {
    if (!root) return;

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Inorder Traversal (Left -> Root -> Right)
void inorderTraversal(Node* root) {
    if (!root) return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorderTraversal(Node* root) {
    if (!root) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
//Preorder: Converting trees to expressions.
//Inorder: Sorted output for binary search trees.
//Postorder: Evaluating expressions and tree deletions.