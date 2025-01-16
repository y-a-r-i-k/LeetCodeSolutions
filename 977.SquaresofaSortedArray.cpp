#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#pragma GCC optimize("O3")

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i)
        {
            int num = nums[i];
            res.push_back(num * num);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> a{-4, -1, 0, 3, 10};
    vector<int> res = sol.sortedSquares(a);

    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
}