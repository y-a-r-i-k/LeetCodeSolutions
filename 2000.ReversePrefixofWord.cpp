#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int index = -1;
        for (int i = 0; i < word.size(); ++i)
        {
            if (word[i] == ch)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            return word;
        }
        int left = 0;
        int right = index;
        while (left < right)
        {
            swap(word[left], word[right]);
            ++left;
            --right;
        }
        return word;
    }
};

int main()
{
    Solution sol;
    cout << sol.reversePrefix("abcdefd", 'd') << "\n";
    cout << sol.reversePrefix("xyxzxe", 'z') << "\n";
}