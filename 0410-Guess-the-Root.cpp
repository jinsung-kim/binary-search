int solve(int n)
{
    long l = 1, r = n / 2, m, sq, res;

    while (l <= r)
    {
        m = l + (r - l) / 2;
        sq = m * m;
        if (sq == n)
            return m;
        else if (sq < n)
        {
            l = m + 1;
            res = m;
        }
        else
        {
            r = m - 1;
        }
    }

    return res;
}