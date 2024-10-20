// single number - II

// Given an array nums where each integer in nums appears thrice except one. Find out the number that has appeared only once.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {        
        //your code goes here
        int ones = 0;
        int twos = 0;
        for (int i = 0; i<nums.size(); i++) {
            ones = (ones ^ nums[i]) & (~twos);
            twos = (twos ^ nums[i]) & (~ones);
        }
        return ones;
    }
};