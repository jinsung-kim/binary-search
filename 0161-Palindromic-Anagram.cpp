#include <unordered_map>
#include <string>

bool solve(string s)
{
    unordered_map<char, int> m;
    for (char c : s)
        m[c]++;

    int odd = 0;

    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        if (iter->second % 2)
            odd++;
        if (odd > 1)
            return false;
    }

    return true;
}