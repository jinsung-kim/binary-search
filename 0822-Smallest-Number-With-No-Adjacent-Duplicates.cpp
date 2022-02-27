string solve(string s)
{
    string res = "";
    if (s.size() == 0)
        return res;
    char prev = s[0];

    for (size_t i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != '?')
        {
            res += s[i];
            prev = s[i];
        }
        else
        {
            for (char c = '1'; c <= '3'; c++)
            {
                if (prev != c && s[i + 1] != c)
                {
                    res += c;
                    prev = c;
                    break;
                }
            }
        }
    }

    if (s.back() == '?')
    {
        for (char c = '1'; c <= '3'; c++)
        {
            if (prev != c)
            {
                res += c;
                return res;
            }
        }
    }
    else
    {
        res += s.back();
    }

    return res;
}