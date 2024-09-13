#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int x) {
        key = x;
        left = nullptr;
        right = nullptr;
    }
};

// method 1 - recursive solution
// in preorder traversal, for each level the leftmost is traversed first
// time - O(n), space - O(h)
int currentLevel = 0;
void printLV1(Node* root, int level) {
    if (root != nullptr) {
        if (currentLevel < level) {
            cout << root->key << " ";
            currentLevel = level;
        }
        printLV1(root->left, level+1);
        printLV1(root->right, level+1);
    }
}
// method 2 - iterative, using BST line by line traversal
void printLV2(Node* root) {
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (q.empty() == false) {
        int count = q.size();
        for (int i = 0; i<count; i++) {
            Node* curr = q.front();
            q.pop();
            if (i==0) {
                cout << curr->key << " ";
            }
            if (curr->left != nullptr) {
                q.push(curr->left);
            }
            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }
    }
}
int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    printLV1(root, 1);
    cout << endl;
    printLV2(root);
}