class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        j=""
        for strs in words:
            if strs==strs[::-1]:
                j=strs
                break
        return j
        