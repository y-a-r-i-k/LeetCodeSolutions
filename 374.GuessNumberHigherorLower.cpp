/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

#include <iostream>
#define END "\n"

using namespace std;

int guess(int num)
{
    int pick = 6;
    if (num < pick)
    {
        return 1;
    }
    else if (num > pick)
    {
        return -1;
    }

    return 0;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 0, r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (guess(mid) < 0)
            {
                r = mid - 1;
            }
            else if (guess(mid) == 1)
            {
                l = mid + 1;
            }
            else
            {
                return mid;
            }
        }
    }
};

int main()
{
    Solution sol;
    cout << sol.guessNumber(10);
}