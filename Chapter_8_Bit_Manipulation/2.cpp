// single number - I
//Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
#include<bits/stdc++.h>
using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        //your code goes here
        int answer = nums[0];
        for (int i = 1; i<nums.size(); i++) {
            answer = answer ^ nums[i];
        }
        return answer;
    }
};