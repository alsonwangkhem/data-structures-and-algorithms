#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void pattern22(int n) {
        int size = 2*n-1;
        for (int i = 0; i<size; i++) {
            for (int j = 0; j<size; j++) {
                int top = i;
                int bottom = size - 1 -i;
                int left = j;
                int right = size - 1 - j;
                int num = n - min (min(top, bottom), min(left, right));
                cout << num << " ";
            }
            cout << endl;
        }
    }
};

int main () {
    Solution sl;
    sl.pattern22(5);
}