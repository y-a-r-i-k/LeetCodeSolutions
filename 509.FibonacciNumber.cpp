#include <iostream>
#include <vector>

using namespace std;

#pragma GCC optimize("O3")

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        vector<int> vec(n + 1);
        vec[1] = 1;
        vec[2] = 1;
        for (int i = 3; i <= n; ++i)
        {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};

int main()
{
    Solution sol;
    cout << sol.fib(2) << "\n";
    cout << sol.fib(3) << "\n";
    cout << sol.fib(4) << "\n";
}