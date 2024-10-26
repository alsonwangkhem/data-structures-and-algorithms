// Max Consecutive Ones III
// Given a binary array nums and an integer k, flip at most k 0's.
// Return the maximum number of consecutive 1's after performing the flipping operation.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //your code goes here
        // brute force O(n^2) time
        // int n = nums.size();
        // int maxLen = 0;
        // for (int i = 0; i<n; i++) {
        //     int length = 0;
        //     int zeros = 0;
        //     for (int j = i; j<n; j++) {
        //         if (nums[j] == 0) {
        //             zeros++;
        //         }
        //         if (zeros > k) {
        //             break;
        //         }
        //         length = j - i + 1;
        //         maxLen = max(maxLen, length);
        //     }
        // }
        // return maxLen;
        // better - sliding window O(2n) time
        // int n = nums.size();
        // int l = 0; 
        // int r = 0;
        // int maxLen = 0;
        // int zeros = 0;
        // while (r < n) {
        //     if (nums[r] == 0) {
        //         zeros++;
        //     }
        //     while (zeros > k) {
        //         if (nums[l] == 0) {
        //             zeros--;
        //         }
        //         l++;
        //     }
        //     int length = r-l+1;
        //     maxLen = max(maxLen, length);
        //     r++;
        // }
        // return maxLen;
        // optimal - O(n) time
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        int zeros = 0;
        while (r < n) {
            if (nums[r] == 0) {
                zeros++;
            }
            if (zeros > k) {
                if (nums[l] == 0) {
                    zeros--;
                }
                l++;
            }
            if (zeros <= k) {
                int length = r-l+1;
                maxLen = max(maxLen, length);
            }
            r++;
        }
        return maxLen;
    }
};