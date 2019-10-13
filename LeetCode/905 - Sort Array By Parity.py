class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        odd = []
        even = []
        for value in A:
            if value % 2 == 0:
                even.append(value)
            else:
                odd.append(value)
        new_list = even + odd
        return new_list


""" (One line solution by ye15)
class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        return sorted(A, key = lambda x: x % 2)
"""
