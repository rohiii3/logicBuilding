class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        s="abcdefghijklmnopqrstuvwxyz"
        st=set(sentence)
        t=True
        if  len(st)<26:
            t=False
        for char in sentence:
            if char not in s:
                t=False
        return t
        