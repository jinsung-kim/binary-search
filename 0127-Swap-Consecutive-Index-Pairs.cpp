vector<int> solve(vector<int> &nums)
{
    vector<pair<int, int>> swaps;

    int e = 0; // evens
    int o = 1; // odds

    while (e + 2 < nums.size())
    {
        swaps.push_back({e, e + 2});
        e += 4;
    }

    while (o + 2 < nums.size())
    {
        swaps.push_back({o, o + 2});
        o += 4;
    }

    for (auto i : swaps)
    {
        swap(nums[i.first], nums[i.second]);
    }

    return nums;
}