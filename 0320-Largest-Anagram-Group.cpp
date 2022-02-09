int solve(vector<string> &words)
{
    unordered_map<string, int> m;
    int res = 0;

    for (const string &word : words)
    {
        string copy(word);
        sort(copy.begin(), copy.end());
        m[copy]++;
    }

    // iterate through to see which is longest
    for (auto iter = m.begin(); iter != m.end(); iter++)
        if (iter->second > res)
            res = iter->second;

    return res;
}