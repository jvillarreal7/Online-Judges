class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        diff_index = {}
        for i, num in enumerate(nums):
            if (target - num) not in diff_index.keys():
                diff_index[num] = i
            else:
                return [diff_index[target - num], i]
