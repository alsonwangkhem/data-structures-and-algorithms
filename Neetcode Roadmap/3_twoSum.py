# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# first approach - brute force - consider the sum of all possible pairs in the array and compare them with the target
# time complexity = O(n^2)
nums = [1, 2, 3]
target = 5
def first(nums, target):
    for i in range(0, len(nums)-1):
        for j in range(i, len(nums)):
            sum = nums[i] + nums[j]
            if sum == target:
                return [i, j]
    return []
print(first(nums, target))

# second approach - two pass hash  map
# time complexity = O(n) and space O(n)
def second(nums, target):
    mp = {}
    for i in range(0, len(nums)):
        mp[nums[i]] = i
    for i in range(0, len(nums)):
        complement = target - nums[i]
        if complement in mp and mp[complement] != i:
            return [i, mp[complement]]
    return []
print(second(nums, target))

# third approach - one pass hash map
# time complexity = O(n) and space = O(n)
def third(nums, target):
    mp = {}
    for i in range(0, len(nums)):
        complement = target - nums[i]
        if complement in mp:
            return [mp[complement], i]
        mp[nums[i]] = i
    return []
print(third(nums, target))