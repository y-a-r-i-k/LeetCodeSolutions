#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

#pragma GCC optimize("O3")

class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            if (arr[i] == 0)
            {
                arr.insert(arr.begin() + i + 1, 0);
                arr.pop_back();
                ++i;
            }
                }
    }
};

int main()
{
    Solution sol;
    vector<int> a{1, 0, 2, 3, 0, 4, 5, 0};

    cout << a.size() << "\n";
    sol.duplicateZeros(a);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n"
         << a.size();
}