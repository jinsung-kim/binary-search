string solve(string s0, string s1)
{
    int i = 0, j = 0;
    string res = "";

    while (i < s0.size() || j < s1.size())
    {
        if (i < s0.size())
            res += s0[i++];
        if (j < s1.size())
            res += s1[j++];
    }

    return res;
}