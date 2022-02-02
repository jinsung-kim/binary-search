int factorial(int n)
{
    if (n <= 1)
        return n;
    return n * factorial(n - 1);
}

int solve(int n)
{
    return factorial(n);
}