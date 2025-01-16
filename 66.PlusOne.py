class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        d = int(''.join(map(str, digits)))
        sl = list(str(d + 1))
        res = []
        for i in sl:
            res.append(int(i))

        return res
    
sol = Solution()
print(sol.plusOne([1,2,3]))