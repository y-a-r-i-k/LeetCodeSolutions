#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

#pragma GCC optimize("O3")

// // Simple solution:
// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         deque<int> dq;
//         int n = nums.size();
//         for (int i = 0; i < n; ++i)
//         {
//             dq.push_back(nums[i]);
//         }
//         for (int i = 0; i < k; ++i)
//         {
//             dq.push_front(dq.back());
//             dq.pop_back();
//         }
//         nums.clear();
//         for (int i = 0; i < n; ++i)
//         {
//             nums.push_back(dq.front());
//             dq.pop_front();
//         }
//     }
// };

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        ios_base::sync_with_stdio(false);
        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end() - k);
        reverse(nums.end() - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main()
{
    Solution sol;
    vector<int> a{1, 2, 3, 4, 5, 6, 7};
    sol.rotate(a, 3);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}