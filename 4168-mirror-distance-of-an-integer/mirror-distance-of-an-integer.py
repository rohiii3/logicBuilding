class Solution:
    def mirrorDistance(self, n: int) -> int:
        reversed_num = int(str(abs(n))[::-1])
        mirror_dist=abs(n-reversed_num)
        return mirror_dist

        