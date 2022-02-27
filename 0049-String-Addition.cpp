string solve(string a, string b)
{
    string res = "";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int i = 0, j = 0, curr = 0, carry = 0;

    while (i < a.size() || j < b.size() || carry)
    {
        curr = carry;
        if (i < a.size())
            curr += (a[i] - '0');
        if (j < b.size())
            curr += (b[j] - '0');

        carry = curr / 10;
        res.push_back((curr % 10) + '0');
        i++, j++;
    }

    reverse(res.begin(), res.end());

    return res;
}