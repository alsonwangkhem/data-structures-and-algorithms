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
// time is O(n) cuz we perform a constant work for each node in the tree
// space is O(h) cuz h+1 is the maximum stack space occupied at any time 
// during the recursive call
int findHeight(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    // find the maximum from left and right and add 1 to it
    // 1 is the increment in each recursive call that adds up to the height
    return max(findHeight(root->left), findHeight(root->right)) + 1;
}
int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    int height = findHeight(root);
    cout << "Height of the tree is " << height;
}