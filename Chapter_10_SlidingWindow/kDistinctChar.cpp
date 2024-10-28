// Longest substring with at most k distinct characters
// given a string s and an integer k. Find the length of the longest substring with at most k distinct characters.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kDistinctChar(string& s, int k) {
        //your code goes here
        // brute force - O(n^2);
        // int n = s.size();
        // int maxLen = 0;
        // for (int i = 0; i<n; i++) {
        //     string temp;
        //     unordered_set<char> st;
        //     for (int j = i; j<n; j++) {
        //         st.insert(s[j]);
        //         if (st.size() > k) {
        //             break;
        //         }
        //         temp += s[j];
        //         maxLen = max(maxLen, (int)(temp.size()));
        //     }
        // }
        // return maxLen;
        // better solution - O(2n);
    //     int n = s.size();
    //     int l = 0;
    //     int r = 0;
    //     int maxLen = 0;
    //     unordered_map<char, int> mpp;
    //     while (r<n) {
    //         mpp[s[r]]++;
    //         if (mpp.size() > k) {
    //             while (mpp.size() > k) {
    //                 mpp[s[l]]--;
    //                 if (mpp[s[l]] == 0) {
    //                     mpp.erase(s[l]);
    //                 }
    //                 l++;
    //             }
    //         }
    //         if (mpp.size() <= k) {
    //             maxLen = max(maxLen, r-l+1);
    //         }
    //         r++;
    //     }
    //     return maxLen;
    // }
    // optimal
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        unordered_map<char, int> mpp;
        while (r<n) {
            mpp[s[r]]++;
            if (mpp.size() > k) {
                mpp[s[l]]--;
                if (mpp[s[l]] == 0) {
                    mpp.erase(s[l]);
                }
                l++;
            }
            if (mpp.size() <= k) {
                maxLen = max(maxLen, r-l+1);
            }
            r++;
        }
        return maxLen;
    }
};