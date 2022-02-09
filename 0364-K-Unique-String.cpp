int solve(string s, int k)
{
    unordered_map<char, int> cnt;
    for (char c : s)
        cnt[c]++;

    vector<int> occ;
    for (auto iter = cnt.begin(); iter != cnt.end(); iter++)
        occ.push_back(iter->second);

    if (k >= occ.size())
        return 0;

    int res = 0;

    sort(occ.begin(), occ.end());

    for (int i = 0; i < occ.size() - k; i++)
        res += occ[i];

    return res;
}