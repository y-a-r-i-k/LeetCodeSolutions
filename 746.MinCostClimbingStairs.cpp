#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("O3")

using namespace std;

class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        int n = cost.size();
        vector<int> dp(n);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i <= n; ++i)
        {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }
        return min(dp[n - 1], dp[n - 2]);
    }
};

int main()
{
    Solution sol;
    vector<int> a{10, 15, 20};
    cout << sol.minCostClimbingStairs(a);
}