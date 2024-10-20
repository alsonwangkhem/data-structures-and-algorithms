// power set using bit manipulation
// Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.
// Do not include the duplicates in the answer.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:	
    vector<vector<int> > powerSet(vector<int>& nums) {
        //your code goes here
        // time O(number of subsets * number of elements) = O(2^n * n)
        // space is taken for storing answer O(2^n * n) can be said
        int n = nums.size();
        int subsets = 1<<n;
        vector<vector<int>> answer;
        for (int i = 0; i<subsets; i++) {
            vector<int> subset;
            for (int bitIndex = 0; bitIndex < n; bitIndex++) {
                if (i & (1<<bitIndex)) {
                    subset.push_back(nums[bitIndex]);
                }
            }
            answer.push_back(subset);
        }
        return answer;
    }
};