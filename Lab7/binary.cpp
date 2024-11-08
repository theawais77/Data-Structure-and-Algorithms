#include <iostream>

// Define a class for a binary tree node
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Class for Binary Tree operations
class BinaryTree {
private:
    TreeNode* root;

    // Private helper function to recursively insert a value into the tree
    TreeNode* insert(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }

        return node;
    }

    // Private helper function to perform pre-order traversal
    void preOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            std::cout << node->data << " "; // Visit the root
            preOrderTraversal(node->left);    // Traverse the left subtree
            preOrderTraversal(node->right);   // Traverse the right subtree
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    // Public function to insert a value into the tree
    void insert(int value) {
        root = insert(root, value);
    }

    // Public function to perform pre-order traversal
    void preOrderTraversal() {
        preOrderTraversal(root);
    }
};

int main() {
    BinaryTree tree;

    // Insert elements into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);

    std::cout << "Pre-order traversal of the binary tree: ";
    tree.preOrderTraversal();
    std::cout << std::endl;

    return 0;
}
