bool solve(vector<int> &nums)
{
    unordered_map<int, int> f;
    for (int n : nums)
        f[n]++;

    for (auto it = f.begin(); it != f.end(); it++)
        if (it->first == it->second)
            return true;
    return false;
}