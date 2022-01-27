int solve(int n)
{
    int prev = 1, curr = 1, tmp;

    for (int i = 2; i < n; i++)
    {
        tmp = prev;
        prev = curr;
        curr = tmp + curr;
    }

    return curr;
}