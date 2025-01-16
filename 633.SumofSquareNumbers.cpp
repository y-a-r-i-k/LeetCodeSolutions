#include <iostream>
#include <cmath>

using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long l = 0;
        long long r = pow(c, 0.5);

        while (l <= r)
        {
            long long sum = l * l + r * r;
            if (c == sum)
            {
                return true;
            }
            else if (c > sum)
            {
                l += 1;
            }
            else
            {
                r -= 1;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    cout << sol.judgeSquareSum(5) << "\n";
    cout << sol.judgeSquareSum(3) << "\n";
}