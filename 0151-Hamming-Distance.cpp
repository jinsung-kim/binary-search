void toBinary(int n, vector<int> &b)
{
    int i = 0;
    while (n)
    {
        b[i++] = n % 2;
        n /= 2;
    }
}

int solve(int x, int y)
{
    int res = 0;
    vector<int> xb(32, 0), yb(32, 0);

    toBinary(x, xb);
    toBinary(y, yb);

    for (int i = 0; i < 32; i++)
        if (xb[i] != yb[i])
            res++;

    return res;
}