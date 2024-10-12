// 1

// 12

// 123

// 1234

// 12345

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern3(int n) {
        for (int i = 0; i<n; i++) {
            for (int j = 0; j<=i; j++) {
                cout << j+1;
            }
            cout << endl;
        }
    }
};

int main () {
    Solution s;
    s.pattern3(5);
}