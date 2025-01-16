class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a_ = int(a, 2)
        b_ = int(b, 2)

        return (bin(a_ + b_)[2:])
    
sol = Solution()
print(sol.addBinary("1010", "1011"))