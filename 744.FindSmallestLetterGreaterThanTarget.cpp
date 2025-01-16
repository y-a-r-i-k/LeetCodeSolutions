#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        auto l = upper_bound(letters.begin(), letters.end(), target);

        if (l == letters.end())
        {
            return letters[0];
        }
        return *l;
    }
};

int main()
{
    Solution sol;
    vector<char> a{'x', 'x', 'y', 'y'};
    cout << sol.nextGreatestLetter(a, 'z') << '\n';
    cout << sol.nextGreatestLetter(a, 'c') << '\n';
}