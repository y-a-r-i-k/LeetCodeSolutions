#include <iostream>

using namespace std;

// Simple python version
// class Solution:
//     def addDigits(self, num: int) -> int:
//         while (num > 9):
//             lis = list(str(num))
//             num = 0
//             for i in lis:
//                 num += int(i)
//         return num
//
// sol = Solution()
// print(sol.addDigits(38))

class Solution
{
public:
    int addDigits(int num)
    {
        if (num == 0)
        {
            return 0;
        }
        else if (num % 9 == 0)
        {
            return 9;
        }
        return num % 9;
    }
};

int main()
{
    Solution sol;
    cout << sol.addDigits(38) << "\n";
}