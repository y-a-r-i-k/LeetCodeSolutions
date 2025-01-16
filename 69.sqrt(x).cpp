class Solution
{
public:
    int mySqrt(int x)
    {

        if (x == 1)
        {
            return 1;
        }
        long long l = 1, r = x, res = 0;
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            if (mid * mid > x)
            {
                r = mid - 1;
                res = r;
            }
            else
            {
                l = mid + 1;
            }
        }
        return res;
    }
};