// Lemonade Change
// Each lemonade at a booth sells for $5. Consumers are lining up to place individual orders, following the billing order. Every consumer will purchase a single lemonade and may pay with a $5, $10, or $20 bill. Each customer must receive the appropriate change so that the net transaction is $5. Initially, there is no change available.
// Determine if it is possible to provide the correct change to every customer. Return true if the correct change can be given to every customer, and false otherwise.
// Given an integer array bills, where bills[i] is the bill the ith customer pays, return true if the correct change can be given to every customer, and false otherwise.
#include<bits/stdc++.h>
using namespace std;

class Solution{    
  public:    
    bool lemonadeChange(vector<int>& bills){
        //your code goes here
        int five = 0;
        int ten = 0;
        int n = bills.size();
        for (int i = 0; i<n; i++) {
          if (bills[i] == 5) {
            five++;
          } else if (bills[i] == 10) {
            if (five) {
              five -= 1;
              ten++;
            } else {
              return false;
            }
          } else {
            if (five && ten) {
              ten -= 1;
              five -= 1;
            } else if (five >= 3) {
              five -= 3;
            } else {
              return false;
            }
          }
        }
        return true;
    }
};