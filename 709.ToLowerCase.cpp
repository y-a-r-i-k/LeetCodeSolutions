#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string toLowerCase(string s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] > 64 && s[i] < 91)
            {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};

int main()
{
    Solution sol;
    cout << sol.toLowerCase("HeLlow") << "\n";
}