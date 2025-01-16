class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        res = []
        for word in words:
            res.append(word[::-1]) 

        return ' '.join(res)


sol = Solution()
print(sol.reverseWords("Let's take LeetCode contest"))
print(sol.reverseWords("Mr Ding"))
