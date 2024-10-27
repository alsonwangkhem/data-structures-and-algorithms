// Fruits into Baskets
// There is only one row of fruit trees on the farm, oriented left to right. An integer array called fruits represents the trees, where fruits[i] denotes the kind of fruit produced by the ith tree.
// The goal is to gather as much fruit as possible, adhering to the owner's stringent rules:
// 1) There are two baskets available, and each basket can only contain one kind of fruit. The quantity of fruit each basket can contain is unlimited.
// 2) Start at any tree, but as you proceed to the right, select exactly one fruit from each tree, including the starting tree. One of the baskets must hold the harvested fruits.
// 3) Once reaching a tree with fruit that cannot fit into any basket, stop.
// Return the maximum number of fruits that can be picked.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        //your code goes here
        // brute force - generate all subarray
        // time O(n^2) and space O(3) or O(1)
        // int n = fruits.size();
        // int maxLen = 0;
        // for (int i = 0; i<n; i++) {
        //   unordered_set<int> type;
        //   for (int j = i; j<n; j++) {
        //     type.insert(fruits[j]);
        //     if (type.size() <= 2) {
        //       int length = j-i+1;
        //       maxLen = max(maxLen, length);
        //     } else {
        //       break;
        //     }
        //   }
        // }
        // return maxLen;
        // better solution - sliding window - time O(2n) and O(1) space
        // int n = fruits.size();
        // int l = 0;
        // int r = 0;
        // int maxLen = 0;
        // unordered_map<int, int> mpp;
        // while (r < n) {
        //   mpp[fruits[r]]++;
        //   while (mpp.size() > 2) {
        //     mpp[fruits[l]]--;
        //     if (mpp[fruits[l]] == 0) {
        //       mpp.erase(fruits[l]);
        //     }
        //     l++;
        //   }
        //   if (mpp.size() <= 2) {
        //     int length = r-l+1;
        //     maxLen = max(maxLen, length);
        //   }
        //   r++;
        // }
        // return maxLen;
        // optimal solution - sliding window
        // time O(n) and space O(1);
        int n = fruits.size();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        unordered_map<int, int> mpp;
        while (r < n) {
          mpp[fruits[r]]++;
          if (mpp.size() > 2) {
            mpp[fruits[l]]--;
            if (mpp[fruits[l]] == 0) {
              mpp.erase(fruits[l]);
            }
            l++;
          }
          if (mpp.size() <= 2) {
            int length = r-l+1;
            maxLen = max(maxLen, length);
          }
          r++;
        }
        return maxLen;
    }
};