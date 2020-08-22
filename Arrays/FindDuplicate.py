#https://leetcode.com/problems/find-the-duplicate-number/submissions/

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        d = { }
        for num in nums:
            if(d.get(num)==None):
                d[num] = True
            else:
                return num