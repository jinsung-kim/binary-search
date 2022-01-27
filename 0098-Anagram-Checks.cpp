#include <unordered_map>

bool solve(string s0, string s1)
{
    unordered_map<char, int> m;

    if (s0.size() != s1.size())
        return false;

    for (size_t i = 0; i < s0.size(); i++)
    {
        m[s0[i]]++;
        m[s1[i]]--;
    }

    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        if (iter->second != 0)
            return false;
    }

    return true;
}