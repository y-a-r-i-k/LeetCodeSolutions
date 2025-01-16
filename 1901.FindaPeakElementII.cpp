#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <utility>

using namespace std;

class Solution
{
public:
    vector<int> findPeakGrid(vector<vector<int>> &mat)
    {
        auto it = mat.begin();
        mat.insert(it, vector<int>(mat[0].size(), -1));
        mat.push_back(vector<int>(mat[0].size(), -1));

        for (int i = 0; i < mat.size(); ++i)
        {
            auto t = mat[i].begin();
            mat[i].insert(t, -1);
            mat[i].push_back(-1);
        }

        int n = mat.size(), m = mat[0].size();
        vector<int> peak;
        bool flag = false;

        for (int i = 1; i < n - 1; ++i)
        {
            if (flag)
            {
                break;
            }
            for (int j = 1; j < m - 1; ++j)
            {
                if (mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i][j + 1] && mat[i][j] > mat[i][j - 1])
                {
                    peak.push_back(i - 1);
                    peak.push_back(j - 1);
                    flag = true;
                    break;
                }
            }
        }

        return peak;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> mat{{1, 4}, {3, 2}};
    vector<int> ans = sol.findPeakGrid(mat);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}