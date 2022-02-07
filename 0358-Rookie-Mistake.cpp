bool solve(string s)
{
    bool left = true, right = true, curr = false;

    for (char pos : s)
    {
        if (pos == 'B' && !curr)
            left = false;
        if (pos == 'B' && curr)
            right = false;
        if (pos == 'R')
            curr = true;
    }

    return left || right;
}