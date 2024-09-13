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
// brute force - find height and iterative print all nodes at each level from k = 0 to k = height
// this takes time O(n) + O(h*n), first one for finding height, second one for printing nodes at each height
// space would be O(h)

// optimized - using queue
// time = O(n) or theta(n) cuz we perform constant operation exactly for each of the nodes
// the queue containes a maximum of the number of elements in a level
// space = best time = theta(1) when there is 1 node at each level, so the queue contains 1 element at a time
//       = worst case = theta(n) when it's a perfectly balanced binary tree and the queue contains the leaf nodes ((n+1)/2);
// more accurately space = theta(w) where w is the width of the binary tree
void bst(Node* root) {
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (q.empty() == false) {
        Node* curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != nullptr) {
            q.push(curr->left);
        } 
        if (curr->right != nullptr) {
            q.push(curr->right);
        }
    }
}

int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    bst(root);
}