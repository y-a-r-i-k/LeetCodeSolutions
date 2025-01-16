#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size();
        int res = -1;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] >= target)
            {
                r = mid;
                res = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (res != -1)
        {
            return res;
        }
        else
        {
            int s = nums.size();
            return s;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> a = {1, 3, 5, 6};
    int target = 7;
    cout << sol.searchInsert(a, target);
}