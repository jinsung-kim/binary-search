#include <vector>

int solve(vector<int> &nums)
{
    int ma = INT_MIN, mi = INT_MAX;

    for (int n : nums)
    {
        if (n > ma)
            ma = n;
        if (n < mi)
            mi = n;
    }

    return ma - mi;
}