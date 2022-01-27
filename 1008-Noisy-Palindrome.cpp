bool solve(string s)
{
    string cleaned = "";

    for (char c : s)
    {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
            continue;
        cleaned += c;
    }

    int l = 0, r = cleaned.size() - 1;

    while (l < r)
        if (cleaned[l++] != cleaned[r--])
            return false;
    return true;
}