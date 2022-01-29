#include <vector>

vector<vector<int>> solve(vector<int> &nums)
{
    vector<vector<int>> res;
    if (nums.empty())
        return res;

    res.push_back(vector<int>());
    res.back().push_back(nums[0]);

    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            res.push_back(vector<int>());
        }
        res.back().push_back(nums[i]);
    }

    return res;
}