#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        map<int, string> m;
        for (int i = 0; i < names.size(); ++i)
        {
            m[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end());

        vector<string> vec;
        for (int i = 0; i < heights.size(); ++i)
        {
            vec.push_back(m[heights[i]]);
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};

int main()
{
    Solution sol;
    vector<string> a{"Mary", "John", "Emma"};
    vector<int> b{180, 165, 170};
    vector<string> sorted = sol.sortPeople(a, b);

    for (int i = 0; i < sorted.size(); ++i)
    {
        cout << sorted[i] << " ";
    }
    cout << "\n";
}