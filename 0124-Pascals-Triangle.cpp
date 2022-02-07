#include <vector>

vector<int> solve(int n)
{
    if (n == 0)
        return {1};
    if (n == 1)
        return {1, 1};
    vector<int> prev = solve(n - 1);
    vector<int> res(n + 1, 1);

    for (int i = 1; i < n; i++)
        res[i] = prev[i - 1] + prev[i];

    return res;
}