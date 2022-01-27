string solve(string s)
{
    if (s.size() < 2)
        return s;
    string res = "";

    int st = 0, en = 0;

    while (st != s.size())
    {
        while (s[st] == s[en])
            en++;
        res += s[st];
        st = en;
    }

    return res;
}