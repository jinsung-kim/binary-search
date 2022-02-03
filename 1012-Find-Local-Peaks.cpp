#include <vector>

vector<int> solve(vector<int> &nums)
{
    vector<int> res;
    if (nums.size() < 2)
        return res;

    if (nums[0] > nums[1])
        res.push_back(0);

    for (int i = 1; i < nums.size() - 1; i++)
    {
        if (nums[i - 1] < nums[i] && nums[i + 1] < nums[i])
            res.push_back(i);
    }

    if (nums[nums.size() - 2] < nums[nums.size() - 1])
        res.push_back(nums.size() - 1);

    return res;
}