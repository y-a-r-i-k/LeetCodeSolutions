#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isUgly(int n)
    {
        if (n < 1)
        {
            return false;
        }

        while (1)
        {
            int a = 2;
            if (n % a != 0)
            {
                break;
            }
            n /= a;
        }
        while (1)
        {
            int a = 3;
            if (n % a != 0)
            {
                break;
            }
            n /= a;
        }
        while (1)
        {
            int a = 5;
            if (n % a != 0)
            {
                break;
            }
            n /= a;
        }
        return (n == 1);
    }
};

int main()
{
    Solution sol;
    cout << sol.isUgly(6) << "\n";
    cout << sol.isUgly(1) << "\n";
    cout << sol.isUgly(14) << "\n";
}