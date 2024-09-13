#include<bits/stdc++.h>
using namespace std;

// tree structure
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

// time is O(n) in worst case, it has to traverse through all the nodes if k leads to the leaf node
// space is O(h) in worst case, if k leads to the leaf node, the maximum space in the recursive call stack at this point will be h+1 which can be said as O(h)
void printNodesAtK(Node*root, int k) {
    if (root == nullptr) {
        return;
    }
    if (k==0) {
        cout << root->key << " ";
        return;
    }
    printNodesAtK(root->left, k-1);
    printNodesAtK(root->right, k-1);
}
int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    int k = 2;
    printNodesAtK(root, k);
}