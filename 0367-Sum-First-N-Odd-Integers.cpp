int solve(int n)
{
    int c = 0, i = 1, res = 0;

    while (c++ < n)
    {
        res += i;
        i += 2;
    }

    return res;
}