class Solution:
    def firstUniqChar(self, s: str) -> int:
        n=-1
        for char in s:
            if s.count(char)==1 :
                n=s.find(char)
                break
        return n
        
        