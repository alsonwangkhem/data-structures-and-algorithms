// *****

// *****

// *****

// *****

// *****

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for (int i = 0; i<n; i++) {
            for (int j = 0; j<n; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main () {
    Solution s;
    s.pattern1(5);
}