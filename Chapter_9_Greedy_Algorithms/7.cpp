// non-overlapping intervals
// Given an array of N intervals in the form of (start[i], end[i]), where start[i] is the starting point of the interval and end[i] is the ending point of the interval, return the minimum number of intervals that need to be removed to make the remaining intervals non-overlapping.

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[1]<b[1];
    }
public:
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        //your code goes here
        sort(Intervals.begin(), Intervals.end(), comp);
        int n = Intervals.size();
        int count = 1;
        int lastEndTime = Intervals[0][1];
        for (int i = 1; i<n; i++) {
            if (Intervals[i][0] >= lastEndTime) {
                count++;
                lastEndTime = Intervals[i][1];
            }
        }
        return n-count;
    }
};