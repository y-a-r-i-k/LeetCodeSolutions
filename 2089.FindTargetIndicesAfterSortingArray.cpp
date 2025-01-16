#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int target)
    {
        vector<int> res;
        sort(nums.begin(), nums.end());
        auto f = lower_bound(nums.begin(), nums.end(), target);
        auto l = upper_bound(nums.begin(), nums.end(), target);
        int first = distance(nums.begin(), f);
        int last = distance(nums.begin(), l);
        for (int i = first; i < last; ++i)
        {
            res.push_back(i);
        }
        return res;
    }
};

int main()
{
    Solution sol;
    vector<int> a{1, 2, 5, 2, 3};
    vector<int> s = sol.targetIndices(a, 5);
    for (int i = 0; i < s.size(); ++i)
    {
        cout << s[i] << " ";
    }
    cout << "\n";
}