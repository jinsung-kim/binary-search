int solve(vector<int> &nums)
{
    int res = 0;
    unordered_map<int, int> f; // freq

    for (int n : nums)
        res += f[n]++;

    return res;
}