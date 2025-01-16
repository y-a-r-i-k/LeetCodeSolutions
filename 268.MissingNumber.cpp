#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        nums.push_back(-1);
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != i - 1)
            {
                return i - 1;
            }
        }
        return nums.size() - 1;
    }
};

int main()
{
    vector<int> nums = {0, 1};
    Solution sol;
    cout << sol.missingNumber(nums);
}