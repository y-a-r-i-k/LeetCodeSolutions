#include <iostream>
#include <vector>
#pragma GCC optimize("O3")

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        vector<int> vec(n + 1);
        vec[1] = 1;
        vec[2] = 2;
        for (int i = 3; i <= n; ++i)
        {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};

int main()
{
    Solution sol;
    cout << sol.climbStairs(3);
}