class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        repetitions = {}
        for value in A:
            if value in repetitions.keys():
                repetitions[value] += 1
            else:
                repetitions[value] = 1
        return list(repetitions.keys())[list(repetitions.values()).index(len(A) / 2)]
