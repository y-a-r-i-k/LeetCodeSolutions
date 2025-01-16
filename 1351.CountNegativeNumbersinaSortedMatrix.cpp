#include <iostream>
#include <vector>
#include <algorithm>

#pragma GCC optimize("O3")

using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int res = 0;
        for (int i = 0; i < grid.size(); ++i)
        {
            res += count_if(grid[i].begin(), grid[i].end(), [](int x)
                            { return x < 0; });
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> m{{3, 2}, {1, 0}};
    cout << sol.countNegatives(m);
}