# Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
# Example 1:
# Input: nums = [1,2,3,1]
# Output: true
# Example 2:
# Input: nums = [1,2,3,4]
# Output: false
# Example 3:
# Input: nums = [1,1,1,3,3,4,3,2,4,2]
# Output: true

nums1 = [1, 2, 3, 4, 2, 4]
nums2 = [1, 2, 3, 4]
nums3 = []
nums4 = [1, 1, 1]

# brute force approach - check every pair in the array nums - time O(n^2) and space O(1)
def brute(nums):
    for i in range(len(nums) - 1):
        for j in range(i+1, len(nums)):
            if nums[i] == nums[j]:
                return True
    return False

print(brute(nums1))
print(brute(nums2))
print(brute(nums3))
print(brute(nums4))

# better solution - sorting - O(nlogn) time and O(1) space
def better(nums):
    nums.sort()
    for i in range(1, len(nums)):
        if nums[i-1] == nums[i]:
            return True
    return False

print(better(nums1))
print(better(nums2))
print(better(nums3))
print(better(nums4))

# best solution - hashset - O(n) time and O(n) space in worst case
def best(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False

print(best(nums1))
print(best(nums2))
print(best(nums3))
print(best(nums4))