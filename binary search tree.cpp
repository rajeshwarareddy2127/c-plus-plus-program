#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left('\0'), right('\0') {}
};

class BST {
private:
    Node* root;

    Node* insert(Node* root, int data) {
        if (root == '\0') {
            return new Node(data);
        }

        if (data < root->data) {
            root->left = insert(root->left, data);
        } else if (data > root->data) {
            root->right = insert(root->right, data);
        }

        return root;
    }

    Node* search(Node* root, int data) {
        if (root == '\0' || root->data == data) {
            return root;
        }

        if (data < root->data) {
            return search(root->left, data);
        } else {
            return search(root->right, data);
        }
    }

    Node* findMin(Node* root) {
        while (root->left != '\0') {
            root = root->left;
        }
        return root;
    }

    Node* deleteNode(Node* root, int data) {
        if (root=='\0') {
            return root;
        }

        if (data < root->data) {
            root->left = deleteNode(root->left, data);
        } else if (data > root->data) {
            root->right = deleteNode(root->right, data);
        } else {
            if (root->left == '\0') {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == '\0') {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }

        return root;
    }

public:
    BST() : root('\0') {}

    void insert(int data) {
        root = insert(root, data);
    }

    bool search(int data) {
        return search(root, data) != '\0';
    }

    void remove(int data) {
        root = deleteNode(root, data);
    }
};

int main() {
    BST bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    
    std::cout << "Search for 30: " << std::boolalpha << bst.search(30) << std::endl;
    std::cout << "Search for 90: " << std::boolalpha << bst.search(90) << std::endl;

   
    bst.remove(20);
    bst.remove(70);

   
    std::cout << "Search for 20: " << std::boolalpha << bst.search(20) << std::endl;
    std::cout << "Search for 70: " << std::boolalpha << bst.search(70) << std::endl;

    return 0;
}

