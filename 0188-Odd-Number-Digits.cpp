#include <vector>

int solve(vector<int> &nums)
{
    int res = 0;

    for (size_t i = 0; i < nums.size(); i++)
    {
        res += int(log10(nums[i]) + 1) & 1;
    }

    return res;
}