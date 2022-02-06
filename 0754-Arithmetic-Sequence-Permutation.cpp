#include <vector>

bool solve(vector<int> &nums)
{
    if (nums.size() < 2)
        return true;
    sort(nums.begin(), nums.end());
    int diff = nums[1] - nums[0];
    for (size_t i = 1; i < nums.size(); i++)
        if (nums[i] - nums[i - 1] != diff)
            return false;
    return true;
}