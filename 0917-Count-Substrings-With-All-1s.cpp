int solve(string s)
{
    int mod = pow(10, 9) + 7;
    int res = 0, count = 0;
    for (char digit : s)
    {
        count = (digit == '1') ? count + 1 : 0;
        res += count;
    }
    return res % mod;
}