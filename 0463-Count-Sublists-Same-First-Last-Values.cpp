int solve(vector<int> &nums)
{
    int res = nums.size(); // all are elligible by themselves
    unordered_map<int, int> occ;

    for (int i = 0; i < nums.size(); i++)
    {
        if (occ[nums[i]])
            res += occ[nums[i]];

        occ[nums[i]]++;
    }

    return res;
}