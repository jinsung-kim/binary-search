string solve(string s)
{
    string res = "";
    if (s.size() < 2)
        return s;

    int cnt = 1;
    char curr = s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            res += (to_string(cnt) + curr);
            cnt = 1;
            curr = s[i];
        }
    }

    res += (to_string(cnt) + curr);

    return res;
}