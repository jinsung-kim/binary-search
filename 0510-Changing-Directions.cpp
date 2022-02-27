int solve(vector<int> &nums)
{
    int res = 0;

    for (int i = 1; i < (int)nums.size() - 1; i++)
    {
        // going up -> down cycle
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
            res++;
        // going down -> up cycle
        if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
            res++;
    }

    return res;
}