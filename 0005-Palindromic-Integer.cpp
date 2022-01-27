bool isPalindrome(const string &s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
        if (s[l++] != s[r--])
            return false;
    return true;
}

bool solve(int num)
{
    string s = to_string(num);
    return isPalindrome(s);
}