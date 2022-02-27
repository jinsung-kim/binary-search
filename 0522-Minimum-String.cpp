int solve(string s, string t)
{
    int res = 0;
    unordered_map<char, int> m;

    for (size_t i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
        m[t[i]]--;
    }

    for (auto iter = m.begin(); iter != m.end(); iter++)
        res += abs(iter->second);

    return res / 2;
}