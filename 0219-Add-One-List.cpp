vector<int> solve(vector<int> &nums)
{
    bool added = false;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] < 9)
        {
            added = true;
            nums[i]++;
            break;
        }
        nums[i] = 0;
    }
    if (added)
        return nums;

    nums.insert(nums.begin(), 1);
    return nums;
}