#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        vector<int> a{INT_MIN};
        for (int i = 0; i < nums.size(); ++i)
        {
            a.push_back(nums[i]);
        }
        a.push_back(INT_MIN);

        int peak = 0;
        for (int s = 0, f = 2; f < a.size(); ++s, ++f)
        {
            if (a[s] < a[s + 1] && a[s + 1] > a[s + 2])
            {
                peak = s + 1 - 1;
            }
        }
        return peak;
    }
};

int main()
{
    Solution sol;
    vector<int> a{1, 2, 3, 1};
    vector<int> b{1, 2, 1, 3, 5, 6, 4};

    cout << sol.findPeakElement(a) << "\n";
    cout << sol.findPeakElement(b) << "\n";
}