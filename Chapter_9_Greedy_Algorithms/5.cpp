// Job sequencing problem
// Given an 2D array Jobs of size Nx3, where Jobs[i][0] represents JobID , Jobs[i][1] represents Deadline , Jobs[i][2] represents Profit associated with that job. Each Job takes 1 unit of time to complete and only one job can be scheduled at a time.
// The profit associated with a job is earned only if it is completed by its deadline. Find the number of jobs and maximum profit.

#include<bits/stdc++.h>
using namespace std;

class Solution{  
  private:
    // add const just in case it's not being accidentally modified
    static bool comp(const vector<int>& a, const vector<int>& b) {
      return a[2] > b[2];
    }
  public:  
    vector<int> JobScheduling(vector<vector<int>>& Jobs) { 
        //your code goes here
        // sort expects static function or free function
        sort(Jobs.begin(), Jobs.end(), comp);
        int n = Jobs.size();
        int maxDeadline = 0;
        for (int i = 0; i<n; i++) {
          maxDeadline = max(maxDeadline, Jobs[i][1]);
        }
        vector<int> hash(maxDeadline+1, -1);
        int count = 0;
        int totalProfit = 0;
        for (int i = 0; i<n; i++) {
          for (int j = Jobs[i][1]-1; j>=0; j--) {
            if (hash[j] == -1) {
              count++;
              hash[j] = Jobs[i][0];
              totalProfit += Jobs[i][2];
              break;
            }
          }
        }
        return {count, totalProfit};
    } 
};