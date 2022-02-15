vector<string> solve(string s, int k)
{
    vector<string> res(k);
    int size = s.size(), i = 0;

    for (char c : s)
    {
        res[i++] += c;
        if (i == k)
            i = 0;
    }

    return res;
}