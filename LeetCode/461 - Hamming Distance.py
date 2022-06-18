class Solution:
    def hamming2(s1, s2):
        assert len(s1) == len(s2)
        return sum(c1 != c2 for c1, c2 in zip(s1, s2))

    def hammingDistance(self, x: int, y: int) -> int:
        bin_x = "{:032b}".format(x)
        bin_y = "{:032b}".format(y)
        return Solution.hamming2(str(bin_x), str(bin_y))
