#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        if (columnTitle.size() == 1)
        {
            return columnTitle[0] - 'A' + 1;
        }
        else
        {
            int res = 0;
            for (int i = columnTitle.size() - 1, exp = 0; i >= 0; --i, ++exp)
            {
                int num = columnTitle[i] - 'A' + 1;
                res += num * pow(26, exp);
            }
            return res;
        }
    }
};

int main()
{
    Solution sol;
    string inp;
    cin >> inp;
    cout << sol.titleToNumber(inp) << "\n";
}