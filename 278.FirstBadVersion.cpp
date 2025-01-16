// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <iostream>
#define END "\n"

using namespace std;

bool isBadVersion(int n)
{
    if (n >= 4)
    {
        return true;
    }
    return false;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        if (n == 1)
        {
            return n;
        }
        if (isBadVersion(n))
        {
            return n;
        }

        int l = 1, r = n;
        int res = 0;
        while (r - l > 0)
        {
            int mid = l + (r - l) / 2;
            cout << mid << END;
            if (isBadVersion(mid + 1))
            {
                l = mid + 1;
                res = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    cout << sol.firstBadVersion(5);
}