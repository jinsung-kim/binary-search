bool solve(vector<int> &nums, vector<int> &target)
{
    unordered_map<int, int> m;
    for (int n : nums)
        m[n]++;
    for (int n : target)
        m[n]--;

    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second != 0)
            return false;
    return true;
}