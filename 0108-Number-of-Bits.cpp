int solve(int n)
{
    int res = 0;
    while (n)
    {
        if (n % 2)
            res++;
        n >>= 1;
    }
    return res;
}