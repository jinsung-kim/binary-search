int solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    if (nums.size() == 2)
        return nums[0] * nums[1];
    return max(nums[0] * nums[1], nums.back() * nums[nums.size() - 2]);
}