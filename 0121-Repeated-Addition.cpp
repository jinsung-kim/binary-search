int digitSum(int n)
{
    int res = 0;

    while (n)
    {
        res += (n % 10);
        n /= 10;
    }

    return res;
}

int solve(int n)
{
    int curr = n;

    while (curr >= 10)
    {
        curr = digitSum(curr);
    }

    return curr;
}