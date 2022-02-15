bool solve(vector<int> &nums)
{
    if (nums[1] <= nums[0])
        return false;

    // already ran first check
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
            return false;
    }

    return true;
}