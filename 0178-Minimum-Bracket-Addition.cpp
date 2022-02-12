int solve(string s)
{
    int res = 0, st = 0;

    for (char c : s)
    {
        if (c == '(')
            st++;
        else
        {
            if (st == 0)
                res++;
            else
                st--;
        }
    }

    return res + st;
}