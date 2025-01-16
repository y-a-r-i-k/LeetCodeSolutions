#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        if (nums.size() == 1)
        {
            if (nums[0] == target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int l = 0, r = nums.size();
        int res = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (target >= nums[mid])
            {
                l = mid + 1;
                res = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (res == -1)
        {
            return -1;
        }
        if (nums[res] == target)
        {
            return res;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    Solution sol;
    vector<int> a{5};
    cout << sol.search(a, 5) << "\n";
    // cout << sol.search(a, 2) << "\n";
}