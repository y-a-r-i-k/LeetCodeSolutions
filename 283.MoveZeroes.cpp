#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int snowBallSize = 0;
        for (int i = 0; i < size(nums); ++i)
        {
            if (nums[i] == 0)
            {
                ++snowBallSize;
            }
            else
            {
                swap(nums[i], nums[i - snowBallSize]);
            }
        }
    }
};

int main()
{
    Solution sol;

    // test 1
    vector<int> a{0, 1, 0, 3, 12};
    cout << a.size() << "\n";

    sol.moveZeroes(a);
    cout << a.size() << "\n";
    for (size_t i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    // test 2
    vector<int> b{1};
    cout << b.size() << "\n";

    sol.moveZeroes(b);
    cout << b.size() << "\n";
    for (size_t i = 0; i < b.size(); ++i)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
}