#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); ++i)
        {
            char tok = s[i];
            if (tok == '(' || tok == '{' || tok == '[')
            {
                st.push(tok);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char current_char = st.top();
                st.pop();
                if (current_char == '(')
                {
                    if (tok != ')')
                    {
                        return false;
                    }
                }
                if (current_char == '{')
                {
                    if (tok != '}')
                    {
                        return false;
                    }
                }
                if (current_char == '[')
                {
                    if (tok != ']')
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution sol;
    cout << sol.isValid("({[]}){}");
}