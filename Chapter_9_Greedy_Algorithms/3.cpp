// Jump game - I
// Given an array of integers nums, each element in the array represents the maximum jump length at that position. Initially starting at the first index of the array, determine if it is possible to reach the last index. Return true if the last index can be reached, otherwise return false.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        //your code goes here
        int n = nums.size();
        int maxInd = 0; // the max index I can reach
        for (int i = 0; i<n; i++) {
            if (i > maxInd) {
                return false;
            }
            maxInd = max(maxInd, i+nums[i]);
            if (maxInd == n-1) {
                return true;
            }
        }
        return true;
    }
};