#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#pragma GCC optimize("O3")

class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int n = s.size();
        if (n == 1)
        {
            return s;
        }
        int c = 0;
        for (int i = 0; i < n; ++i)
        {
            if (isalpha(s[i]))
            {
                ++c;
            }
        }
        if (c == 0)
        {
            return s;
        }
        for (int b = 0, e = n; b <= e;)
        {
            if (isalpha(s[b]) && isalpha(s[e]))
            {
                swap(s[b], s[e]);
            }
            else
            {
                if (!isalpha(s[b]))
                {
                    ++b;
                }
                if (!isalpha(s[e]))
                {
                    --e;
                }
                continue;
            }
            --e;
            ++b;
        }
        return s;
    }
};

int main()
{
    Solution sol;
    cout << sol.reverseOnlyLetters("ab-cd") << "\n";
    cout << sol.reverseOnlyLetters("mv']4") << "\n";
}