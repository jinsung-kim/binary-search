int solve(int n)
{
    int res = 1;

    while (n != 1)
    {
        if (n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
        res++;
    }

    return res;
}