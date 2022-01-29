bool solve(string s)
{
    int st = 0;

    for (char c : s)
    {
        if (c == '(')
            st++;
        else
        {
            st--;
            if (st < 0)
                return false;
        }
    }

    return st == 0;
}