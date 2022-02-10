vector<int> solve(vector<int> &nums)
{
    vector<int> res(nums.size(), 0);

    sort(nums.begin(), nums.end());

    int mi = 0, ma = nums.size() - 1, ind = 0;

    while (ind + 1 < res.size())
    {
        res[ind] = nums[ma];
        res[ind + 1] = nums[mi];
        ma--, mi++;
        ind += 2;
    }

    // one left
    if (nums.size() % 2)
        res.back() = nums[ma];

    return res;
}