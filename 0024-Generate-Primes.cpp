#include <vector>

vector<int> solve(int n)
{
    vector<int> res;
    if (n < 2)
        return res;
    bool p[n + 1];
    memset(p, false, sizeof(p));

    for (int i = 2; i <= n; i++)
    {
        if (p[i] || (i % 2 == 0 && i != 2))
            continue;
        res.push_back(i);
        for (size_t j = i * i; j < n; j += i)
            p[j] = true;
    }

    return res;
}