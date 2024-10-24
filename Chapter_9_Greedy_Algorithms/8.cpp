// insert interval
// Given a 2D array Intervals, where Intervals[i] = [start[i], end[i]] represents the start and end of the ith interval, the array represents non-overlapping intervals sorted in ascending order by start[i]. 
// Given another array newInterval, where newInterval = [start, end] represents the start and end of another interval, insert newInterval into Intervals such that Intervals remain non-overlapping and sorted in ascending order by start[i].
// Return Intervals after the insertion of newInterval.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insertNewInterval(vector<vector<int>>& Intervals, vector<int>& newInterval){
        //your code goes here
        vector<vector<int>> answer;
        int i = 0;
        int n = Intervals.size();
        while (i<n && Intervals[i][1] < newInterval[0]) {
            answer.push_back(Intervals[i]);
            i++;
        }
        while (i<n && Intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], Intervals[i][0]);
            newInterval[1] = max(newInterval[1], Intervals[i][1]);
            i++;
        }
        answer.push_back(newInterval);
        while (i<n) {
            answer.push_back(Intervals[i]);
            i++;
        }
        return answer;
    }
};