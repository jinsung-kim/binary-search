#include <vector>

void dfs(vector<int> &res, int curr, int n)
{
    if (curr > n)
        return;
    res.push_back(curr);
    dfs(res, curr * 10, n);
    if (curr % 10 != 9)
        dfs(res, curr + 1, n);
}

vector<int> solve(int n)
{
    vector<int> res;

    dfs(res, 1, n);

    return res;
}