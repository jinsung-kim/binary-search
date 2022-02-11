int solve(string a, string b)
{
    unordered_map<char, int> ma, mb;

    for (char c : a)
        ma[c]++;
    for (char c : b)
        mb[c]++;

    int res = 0;

    for (auto iter = ma.begin(); iter != ma.end(); iter++)
    {
        char c = iter->first;
        // cannot use that one bc other one doesn't have it
        if (mb.find(c) == mb.end())
            continue;
        res += min(iter->second, mb[c]);
    }

    return res;
}