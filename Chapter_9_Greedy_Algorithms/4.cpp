// Shortest Job First
// A software engineer is tasked with using the shortest job first (SJF) policy to calculate the average waiting time for each process. The shortest job first also known as shortest job next (SJN) scheduling policy selects the waiting process with the least execution time to run next.
// Given an array of n integers representing the burst times of processes, determine the average waiting time for all processes and return the closest whole number that is less than or equal to the result.

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(vector<int>& bt) {
        //your code goes here
        sort(bt.begin(), bt.end());
        int n = bt.size();
        long long time = 0;
        long long waitTime = 0;
        for (int i = 0; i<n; i++) {
          waitTime += time;
          time += bt[i];
        }
        return waitTime/n;
    }
};

// all we have to do is maintain a "time" variable, which will sum up all the burst time as we traverse through the array and a "waitTime" variable which will add up the accumulative burst times in each iteration, which eventually gives the waiting time for each of the processes