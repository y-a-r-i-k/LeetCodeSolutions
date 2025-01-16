#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <stack>

using namespace std;

class Solution
{
public:
    int priority_check(std::string x)
    {
        if (x == "(")
        {
            return 1;
        }
        else if (x == "+" || x == "-")
        {
            return 2;
        }
        else if (x == "*" || x == "/")
        {
            return 3;
        }
    }

    std::vector<std::string> InfixToPostfix(const std::vector<std::string> &infix)
    {
        std::stack<std::string> s;
        std::vector<std::string> postfix;

        for (auto tok : infix)
        {
            if (std::atoi(tok.c_str()))
            {
                postfix.emplace_back(tok);
            }
            else if (tok == "(")
            {
                s.emplace(tok);
            }
            else if (tok == ")")
            {
                while (!s.empty())
                {
                    tok = s.top();
                    s.pop();
                    if (tok == "(")
                    {
                        break;
                    }
                    postfix.emplace_back(tok);
                }
            }
            else
            {
                while (!s.empty() && priority_check(tok) <= priority_check(s.top()))
                {
                    postfix.emplace_back(s.top());
                    s.pop();
                }
                s.emplace(tok);
            }
        }
        while (!s.empty())
        {
            postfix.emplace_back(s.top());
            s.pop();
        }
        return postfix;
    }
    int calculate(string s)
    {
        stack<int> st;
        std::istringstream iss(s);
        std::string token;

        while (iss >> token)
        {
            if (isdigit(token[0]))
            {
                st.push(stoi(token));
            }
            else
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                switch (token[0])
                {
                case '+':
                    st.push(a + b);
                    break;

                case '-':
                    st.push(a - b);
                    break;

                case '*':
                    st.push(a * b);
                    break;

                case '/':
                    st.push(a / b);
                    break;
                }
            }
        }

        return st.top();
    }
};

int main()
{
    Solution sol;
    string s;
    cin >> s;
    cout << sol.calculate(s) << "\n";
}