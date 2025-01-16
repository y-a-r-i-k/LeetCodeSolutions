#include <iostream>
#include <vector>
#include <algorithm>

#pragma GCC optimize("O3")

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> a{4, 5, 6, 7, 0, 1, 2};
    cout << sol.search(a, 0) << '\n';
    cout << sol.search(a, 3) << '\n';

    vector<int> b{1};
    cout << sol.search(b, 0) << '\n';
}