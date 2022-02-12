bool solve(vector<int> &nums, int k)
{
    double s = nums.size(), total = accumulate(nums.begin(), nums.end(), 0);

    for (int n : nums)
    {
        if ((total - n) / (s - 1) == k)
            return true;
    }

    return false;
}