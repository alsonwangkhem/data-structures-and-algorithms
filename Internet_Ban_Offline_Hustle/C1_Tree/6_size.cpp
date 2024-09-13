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
// time O(n) and space O(h)
int size(Node * root) {
    if (root == nullptr) {
        return 0;
    }
    int l = size(root->left);
    int r = size(root->right);
    return l+r+1;
}
// or we can use level order traversal for an iterative solution

int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << size(root) << endl;
}