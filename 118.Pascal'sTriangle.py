class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        triangle = []
        for i in range(numRows):
            row = [1] * (i+1)
            for j in range(i + 1):
                if j != 0 and j != i:
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]

            triangle.append(row)

        return triangle
    
sol = Solution()
print(sol.generate(5))