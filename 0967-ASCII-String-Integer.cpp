int solve(string s)
{
    int res = 0, curr = 0;

    for (char c : s)
    {
        if (c >= '0' && c <= '9')
        {
            curr *= 10;
            curr += (c - '0');
        }
        else
        {
            res += curr;
            curr = 0;
        }
    }

    return res + curr;
}