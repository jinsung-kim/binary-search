int solve(int n)
{
    int b[32];
    int ind = 0;

    while (n)
    {
        b[ind++] = n % 2;
        n >>= 1;
    }

    int res = 0, curr = 0;
    for (int j = 0; j < ind; j++)
    {
        if (b[j] == 1)
        {
            curr++;
        }
        else
        {
            res = max(res, curr);
            curr = 0;
        }
    }

    if (curr > res)
        return curr;
    return res;
}