class Solution:
    def isVowel(self, c):
        if c in [ 'a', 'e', 'i', 'o','u']:
            return True
        return False
    
    def reverseVowels(self, s: str) -> str:
        l = 0
        r = len(s) - 1
        ss = [c for c in s]
        while (l <= r):
            if self.isVowel(ss[l]) == True and self.isVowel(ss[r]) == True:
                ss[l], ss[r] = ss[r], ss[l]
                l += 1
                r -= 1
            elif self.isVowel(ss[l]) == True and not self.isVowel(ss[r]) == True:
                r -= 1
            elif not self.isVowel(ss[l]) == True and self.isVowel(ss[r]) == True:
                l += 1
            else:
                l += 1
                r -= 1
        return "".join(ss)
    
sol = Solution()
s = "IceCreAm"
print(sol.reverseVowels(s))