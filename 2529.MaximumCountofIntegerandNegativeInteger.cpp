#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maximumCount(vector<int> &nums)
    {
        int pos = count_if(nums.begin(), nums.end(), [](int x)
                           { return x > 0; });
        int neg = count_if(nums.begin(), nums.end(), [](int x)
                           { return x < 0; });

        return max(pos, neg);
    }
};

int main()
{
    Solution sol;
    vector<int> a{-2, -1, -1, 1, 2, 3};
    cout << sol.maximumCount(a);
}