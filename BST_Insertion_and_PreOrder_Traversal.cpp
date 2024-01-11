#include <iostream>
#include <string>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to insert a key into the BST
TreeNode* insert(TreeNode* root, int key) {
    if (root == NULL) {
        return new TreeNode(key);
    }

    if (key < root->val) {
        root->left = insert(root->left, key);
    } else if (key > root->val) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function for pre-order traversal and printing
void preOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main() {
    TreeNode* root = NULL;
    string command;
    int key;

    // Process input commands
    while (true) {
        cin >> command;
        if (command == "#") {
            break;
        }

        cin >> key;

        if (command == "insert") {
            // Insert key into the BST
            root = insert(root, key);
        }
    }

    // Perform pre-order traversal and print the sequence of keys
    preOrderTraversal(root);

    return 0;
}
