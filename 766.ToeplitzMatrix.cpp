#include <iostream>
#include <vector>
#include <algorithm>

#pragma GCC optimize("O3")

using namespace std;

class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 1; i < matrix.size(); ++i)
        {
            for (int j = 1; j < matrix[0].size(); ++j)
            {
                if (matrix[i][j] != matrix[i - 1][j - 1])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> a{{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};
    vector<vector<int>> b{{1, 2}, {2, 2}};
    cout << sol.isToeplitzMatrix(a) << "\n";
    cout << sol.isToeplitzMatrix(b) << "\n";
}