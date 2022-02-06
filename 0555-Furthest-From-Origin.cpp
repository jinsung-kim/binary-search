int solve(string s)
{
    int curr = 0, cnt = 0;

    for (char c : s)
    {
        if (c == 'L')
            curr--;
        else if (c == 'R')
            curr++;
        else
            cnt++;
    }

    if (curr < 0)
        curr -= cnt;
    else
        curr += cnt;
    return abs(curr);
}