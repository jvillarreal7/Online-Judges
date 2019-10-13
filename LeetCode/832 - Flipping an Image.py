class Solution:
    def flipAndInvertImage(self, A: List[List[int]]) -> List[List[int]]:
        for list in A:
            list.reverse()
            for index, item in enumerate(list):
                if item == 0:
                    list[index] = 1
                else:
                    list[index] = 0
        return A
