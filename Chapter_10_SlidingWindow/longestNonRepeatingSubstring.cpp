// longest substring without repeating characters
// given a string, S. Find the length of the longest substring without repeating characters.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
      //your code goes here
      // brute force - generate all the substring
      // for each substring, store the encountered val in hash
      // O(n^2) time and O(256) space
      // int n = s.size();
      // int maxLen = 0;
      // for (int i = 0; i<n; i++) {
      //   int hash[256] = {0};
      //   int len = 0;
      //   for (int j = i; j<n; j++) {
      //     if (hash[s[j]] == 1) {
      //       break;
      //     }
      //     len++;
      //     maxLen = max(maxLen, len);
      //     hash[s[j]] = 1;
      //   }
      // }
      // return maxLen;
      // sliding window to optimize time to O(n)
      int n = s.size();
      int l = 0;
      int r = 0;
      int maxLen = 0;
      int hash[256];
      fill(hash, hash+256, -1);
      while (r < n) {
        if (hash[s[r]] != -1 && l <= hash[s[r]]) {
          l = hash[s[r]] + 1;
        }
        int len = r-l+1;
        maxLen = max(maxLen, len);
        hash[s[r]] = r;
        r++;
      }
      return maxLen;
    }
};