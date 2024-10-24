// N meetings in one room
// Given one meeting room and N meetings represented by two arrays, start and end, where start[i] represents the start time of the ith meeting and end[i] represents the end time of the ith meeting, determine the maximum number of meetings that can be accommodated in the meeting room if only one meeting can be held at a time.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        static bool comp(vector<int>& a, vector<int>& b) {
            return a[1]<b[1];
        }
    public:
    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here
        int n = end.size();
        vector<vector<int>> meetings;
        for (int i = 0; i<n; i++) {
            meetings.push_back({start[i], end[i]});
        }
        sort(meetings.begin(), meetings.end(), comp);
        int count = 1;
        int freeTime = meetings[0][1];
        for (int i = 1; i<n; i++) {
            if (meetings[i][0] > freeTime) {
                count++;
                freeTime = meetings[i][1];
            }
        }
        return count;
    }
};