int solve(int a)
{
    int curr = 1, res = 0;
    while (curr <= a)
    {
        if (curr == a)
            return res;
        res++;
        curr *= res;
    }
    return -1;
}