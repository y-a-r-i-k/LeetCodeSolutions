#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        for (int i = 0; i < s.size() / 2; ++i)
        {
            swap(s[i], s[s.size() - i - 1]);
        }
    }
};

int main()
{
    Solution sol;
    vector<char> a{'h', 'e', 'l', 'l', 'o'};

    sol.reverseString(a);
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}