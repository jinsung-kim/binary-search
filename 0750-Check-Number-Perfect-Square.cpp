bool solve(int n)
{
    if (n < 2)
        return true;
    long l = 2, r = n / 2, m;

    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (m * m == n)
            return true;
        else if (m * m > n)
            r = m - 1;
        else
            l = m + 1;
    }

    return false;
}