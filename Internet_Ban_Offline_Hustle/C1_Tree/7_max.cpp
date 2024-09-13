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

// method 1 - recursive
// time O(n), space O(h)

int getMax(Node* root) {
    if (root == nullptr) {
        return INT_MIN;
    }
    return max(root->key, max(getMax(root->left), getMax(root->right)));
}

// method 2 - iterative - using level order traversal, as we pop out from the queue, we can compare with currect max

int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    cout << getMax(root) << endl;
}