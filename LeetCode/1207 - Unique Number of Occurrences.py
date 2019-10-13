class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        occurrences = {}
        for value in arr:
            if value in occurrences.keys():
                occurrences[value] += 1
            else:
                occurrences[value] = 1

        oc_set = set()
        for element in occurrences:
            if occurrences[element] in oc_set:
                return False
            else:
                oc_set.add(occurrences[element])

        if len(oc_set) == len(occurrences):
            return True
