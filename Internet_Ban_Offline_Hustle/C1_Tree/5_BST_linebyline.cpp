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

// method 1 - push null at the end of each level
// time - O(h+n), h for null as there is one null at each level and n for the elements, can also be O(n)
// space - theta(w) (there is w+1 elements at most in the queue) or O(n) (for perfectly balanced binary tree)
void linebyline1(Node* root) {
    if (root == nullptr) {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    while (q.size() > 1) {
        Node* curr = q.front();
        q.pop();
        if (curr == nullptr) {
            q.push(nullptr);
            cout << endl;
            continue;
        }
        cout << curr->key << " ";
        if (curr->left != nullptr) {
            q.push(curr->left);
        }
        if (curr->right != nullptr) {
            q.push(curr->right);
        }
    }
}
// method 2 - using 2 loops - same time and space complexity
void linebyline2(Node* root) {
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
            cout << curr->key << " ";
            if (curr->left != nullptr) {
                q.push(curr->left);
            }
            if (curr->right != nullptr) {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}

int main () {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    linebyline1(root);
    cout << endl;
    linebyline2(root);
}