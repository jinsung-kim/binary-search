string solve(string s)
{
    string res = "", curr = "";

    for (size_t i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
            curr += s[i];
        else
        {
            int n = stoi(curr);
            curr = "";
            for (int j = 0; j < n; j++)
                res += s[i];
        }
    }

    return res;
}