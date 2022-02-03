int solve(string s)
{
    int res = 0;

    for (char c : s)
        res = 3 * res + (c - '0');

    return res;
}