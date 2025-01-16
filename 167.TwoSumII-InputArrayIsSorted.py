class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        r = len(numbers) - 1
        l = 0
        while l <= r:
            print(f"r: {r} | l: {l}")
            if numbers[r] + numbers[l] > target:
                r -= 1
            elif numbers[r] + numbers[l] < target:
                l += 1
            else:
                return [l + 1, r + 1]

sol = Solution()
print(sol.twoSum([2,7,11,15], 9))
