#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// //Simple option
// class Solution
// {
// public:
//     int getCommon(vector<int> &nums1, vector<int> &nums2)
//     {
//         set<int> n1(nums1.begin(), nums1.end());
//         set<int> n2(nums2.begin(), nums2.end());
//
//         if (n1.size() > n2.size())
//         {
//             for (auto n : n2)
//             {
//                 if (n1.contains(n)) //-std=c++20
//                 {
//                     return n;
//                 }
//             }
//         }
//         else
//         {
//             for (auto n : n1)
//             {
//                 if (n2.contains(n)) //-std=c++20
//                 {
//                     return n;
//                 }
//             }
//         }
//         return -1;
//     }
// };

// Normal one
class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int f = 0, s = 0;
        while (f < nums1.size() && s < nums2.size())
        {
            if (nums1[f] == nums2[s])
            {
                return nums1[f];
            }
            else if (nums1[f] > nums2[s])
            {
                ++s;
            }
            else
            {
                ++f;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> a{1, 2, 3, 6}, b{2, 3, 4, 5};
    cout << sol.getCommon(a, b);
}