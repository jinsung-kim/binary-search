#include <vector>

int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int res = INT_MIN, curr;
    for (size_t i = 1; i < nums.size(); i++)
    {
        curr = nums[i] - nums[i - 1];
        res = max(curr, res);
    }

    return res;
}