# Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

# Example 1:

# Input: s = "anagram", t = "nagaram"
# Output: true
# Example 2:

# Input: s = "rat", t = "car"
# Output: false

# first approach, anagram is all about same letter and same frequency.. so we just sort them and see if they are equal
# sorting takes O(nlogn + mlogm) time complexity and space of O(m+n) because sorted(s) and sorted(t) creates an extra space of m and n respectively
def first(s, t):
    return sorted(s) == sorted(t)

print(first("cat", "atc"))
print(first("alson", "mustang"))
# using sort() instead of sorted(), reminder that sort() can't be used on strings so if we want to use sort(), we have to first convert the strings to a list and then do list.sort()
def firstAlt(s, t):
    if len(s) != len(t):
        return False
    s_list = list(s)
    t_list = list(t)
    s_list.sort()
    t_list.sort()
    return s_list == t_list
print(firstAlt("cat", "tac"))
print(firstAlt("", "alson"))

# second approach, using hashmap (dictionary) to track the characters and the number of characters
# time complexity  for the second approach is O(n) where n is the max of the lengths of the two strings and space would be O(n) where n is the same as above
import collections
def second(s, t):
    mp = collections.defaultdict(int)
    for c in s:
        mp[c] += 1
    for c in t:
        mp[c] -= 1
    for val in mp.values():
        if val != 0:
            return False
    return True

print(second("cat", "tac"))
print(second("alson", "mustang"))

# third approach, using hashmap (arrays) to track the characters in the ASCII format as the index of the array and the frequency of each of the characters as the actual element of the  corresponding index

def third(s, t):
    count = [0] * 26
    for c in s:
        count[ord(c) - ord("a")] += 1
    for c in t:
        count[ord(c) - ord("a")] -= 1
    for freq in count:
        if freq != 0:
            return False
    return True
print(third("cat", "tac"))
print(third("alson", ""))