class Solution:
    def defangIPaddr(self, address: str) -> str:
        s = str.replace(address, ".", "[.]")
        return s
