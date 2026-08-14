class Solution:
    def maxDistinct(self, s: str) -> int:
        t=set(s)
        c=0
        for char in t:
            s.find(char)
        return len(t) 


        