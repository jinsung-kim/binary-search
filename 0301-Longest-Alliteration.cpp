int solve(vector<string> &words)
{
    if (words.empty())
        return 0;
    int res = 1, curr = 1;

    for (size_t i = 1; i < words.size(); i++)
    {
        if (words[i][0] == words[i - 1][0])
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