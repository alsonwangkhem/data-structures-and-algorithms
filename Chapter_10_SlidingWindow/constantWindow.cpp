// Maximum points you can obtain from cards
// Given N cards arranged in a row, each card has an associated score denoted by the cardScore array. Choose exactly k cards. In each step, a card can be chosen either from the beginning or the end of the row. The score is the sum of the scores of the chosen cards.
// Return the maximum score that can be obtained.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        //your code goes here
        int n = cardScore.size();
        int lSum = 0;
        int rSum = 0;
        int maxSum = 0;
        for (int i = 0; i<k; i++) {
          lSum += cardScore[i];
        }
        maxSum = max(maxSum, lSum + rSum);
        for (int i = 0; i<k; i++) {
          lSum -= cardScore[k-1-i];
          rSum += cardScore[n-1-i];
          maxSum = max(maxSum, lSum + rSum);
        }
        return maxSum;
    }
};