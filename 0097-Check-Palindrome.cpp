#include <string>

bool solve(string s)
{
    int l = 0, r = s.size() - 1;
    while (s[l] == s[r] && l < r)
        l++, r--;
    return l >= r;
}