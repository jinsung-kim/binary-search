int getLength(int n)
{
    int res = 1;
    while (n /= 10)
        res++;
    return res;
}

bool solve(int n)
{
    int res = 0, len = getLength(n), og = n, digit;

    while (n)
    {
        digit = n % 10;
        res += (pow(digit, len));
        n /= 10;
    }

    return res == og;
}