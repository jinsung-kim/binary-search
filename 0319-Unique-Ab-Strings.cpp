int solve(string s)
{
    int aCnt = 0;

    for (char c : s)
        if (c == 'a')
            aCnt++;

    return pow(2, aCnt);
}