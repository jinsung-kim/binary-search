#include <vector>

void dfs(vector<vector<int>> &m, int i, int j, int &curr, int &res)
{
    if (i < 0 || i >= m.size() || j < 0 || j >= m[0].size() || m[i][j] == 0)
        return;
    curr++;
    m[i][j] = 0; // seen + accounted for -> change to water now
    dfs(m, i + 1, j, curr, res);
    dfs(m, i - 1, j, curr, res);
    dfs(m, i, j + 1, curr, res);
    dfs(m, i, j - 1, curr, res);
    if (curr > res)
        res = curr;
}

int solve(vector<vector<int>> &matrix)
{
    int res = 0;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            int curr = 0;
            if (matrix[i][j] == 1)
                dfs(matrix, i, j, curr, res);
        }
    }

    return res;
}