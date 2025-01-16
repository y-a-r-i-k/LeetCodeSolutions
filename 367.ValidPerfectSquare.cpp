#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPerfectSquare(long long num)
    {
        if (num == 1)
        {
            return true;
        }
        long long l = 1, r = num;
        long long res = 0;
        while (l < r)
        {
            long long mid = l + (r - l) / 2;
            if (mid * mid <= num)
            {
                l = mid + 1;
                res = mid;
            }
            else
            {
                r = mid;
            }
        }
        return res * res == num;
    }
};

int main()
{
    int num = 14;
    Solution sol;
    cout << sol.isPerfectSquare(num);
}