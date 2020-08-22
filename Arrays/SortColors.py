#https://leetcode.com/problems/sort-colors/
#O(1) space req; O(n) time; only one pass in the array
class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero_pointer = -1
        two_pointer = len(nums)
        
        i = 0
        while i<two_pointer:
            if(nums[i]==0):
                if(i==zero_pointer+1):
                    zero_pointer+=1
                    i += 1
                else:
                    temp = nums[zero_pointer+1]
                    nums[zero_pointer+1] = nums[i]
                    nums[i] = temp
                    zero_pointer += 1
            elif(nums[i]==2):
                temp=nums[two_pointer-1]
                nums[two_pointer-1] = nums[i]
                nums[i] = temp
                two_pointer -= 1
            elif(nums[i]==1):
                i += 1