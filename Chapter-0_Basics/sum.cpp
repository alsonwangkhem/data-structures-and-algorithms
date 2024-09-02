#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        return (nums[0] + nums[nums.size()-1]);
    }
};