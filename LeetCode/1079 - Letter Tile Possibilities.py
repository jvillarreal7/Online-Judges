from itertools import permutations


class Solution:
    def numTilePossibilities(self, tiles: str) -> int:
        seq = set()

        for l in range(1, len(tiles) + 1):
            seq.update(list(permutations(tiles, l)))

        return len(seq)
