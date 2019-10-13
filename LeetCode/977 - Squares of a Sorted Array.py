class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        for index, number in enumerate(A):
            A[index] *= number
        return sorted(A)
