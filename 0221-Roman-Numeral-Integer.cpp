#include <unordered_map>

int solve(string n)
{
    int res = 0;
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    reverse(n.begin(), n.end());

    res += m[n[0]];

    for (int i = 1; i < n.size(); i++)
    {
        // I before V, I before X, etc...
        if (m[n[i]] < m[n[i - 1]])
            res -= m[n[i]];
        else
            res += m[n[i]];
    }

    return res;
}