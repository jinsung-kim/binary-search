string solve(string s)
{
    string res = "";
    size_t n = s.size();

    for (size_t i = 0; i < n; i++)
    {
        res += s[i];
        while (i + 1 < n && s[i] == s[i + 1])
            i++;
    }

    return res;
}