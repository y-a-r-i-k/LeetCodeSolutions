#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        for (int i = 0; i < size(nums); ++i)
        {
            for (int j = 0; j < size(nums); ++j)
            {
                if (nums[i] == nums[j] && abs(i - j) <= k && i != j)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{

    vector<int> a = {1, 2, 3, 1};
    int k = 3;

    Solution sol;
    cout << sol.containsNearbyDuplicate(a, k) << "\n";
}