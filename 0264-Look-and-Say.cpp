string constructNext(const string &s)
{
    int curr = 1;
    string res = "";

    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            curr++;
        else
        {
            res += to_string(curr) + s[i - 1];
            curr = 1;
        }
    }

    res += to_string(curr) + s.back();

    return res;
}

string solve(int n)
{
    string curr = "1";

    while (--n)
    {
        curr = constructNext(curr);
    }

    return curr;
}