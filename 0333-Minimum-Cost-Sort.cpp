int solve(vector<int> &nums)
{
    vector<int> copy = nums;
    sort(copy.begin(), copy.end());

    // count diff
    int res, asc = 0, des = 0;

    for (size_t i = 0; i < nums.size(); i++)
        if (nums[i] != copy[i])
            asc += abs(nums[i] - copy[i]);

    // descending
    sort(copy.begin(), copy.end(), greater<int>());

    for (size_t i = 0; i < nums.size(); i++)
        if (nums[i] != copy[i])
            des += abs(nums[i] - copy[i]);

    res = min(asc, des);

    return res;
}