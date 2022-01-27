int solve(int num)
{
    int res = 0, curr;
    while (num)
    {
        curr = num % 10;
        res += curr;
        num /= 10;
    }
    return res;
}