#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        vector<char> v;
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                v.push_back(s[i]);
                continue;
            }
            if (!isalpha(s[i]))
            {
                continue;
            }
            v.push_back(tolower(s[i]));
        }
        if (v.size() == 1)
        {
            return true;
        }
        for (int i = 0; i < v.size() / 2; ++i)
        {
            if (v[i] != v[v.size() - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << "\n";
}