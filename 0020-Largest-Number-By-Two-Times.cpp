#include <vector>

bool solve(vector<int> &nums)
{
    int m = INT_MIN, n = INT_MIN;
    for (int i : nums)
    {
        if (i > m)
        {
            n = m;
            m = i;
        }
        else
        {
            n = max(n, i);
        }
    }
    return m > 2 * n;
}