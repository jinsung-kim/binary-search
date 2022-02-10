int solve(string s)
{
    if (s.size() == 0)
        return 0;
    int res = 0, curr = 1;

    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            curr++;
        else
        {
            res = max(res, curr);
            curr = 1;
        }
    }

    res = max(res, curr);

    return res;
}