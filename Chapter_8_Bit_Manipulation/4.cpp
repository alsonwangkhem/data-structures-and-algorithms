// single number - III

// Given an array nums of length n, every integer in the array appears twice except for two integers. Identify and return the two integers that appear only once in the array. Return the two numbers in ascending order.

// For example, if nums = [1, 2, 1, 3, 5, 2], the correct answer is [3, 5], not [5, 3].

#include<bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		vector<int> singleNumber(vector<int>& nums){
			//your code goes here
			// time O(2n) and space O(1)
			int n = nums.size();
			long XOR = 0;
			for (int i = 0; i<n; i++) {
				XOR = XOR^nums[i];
			}
			int rightmost = (XOR & (XOR-1))^XOR;
			int XOR1 = 0, XOR2 = 0;
			for (int i = 0; i<n; i++) {
				if (nums[i] & rightmost) {
					XOR1 = XOR1^nums[i];
				} else {
					XOR2 = XOR2^nums[i];
				}
			}
			if (XOR1 < XOR2) return {XOR1, XOR2};
			return {XOR2, XOR1};
		}
};