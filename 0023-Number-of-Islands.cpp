#include <vector>
// My Amazon question (twice...)

void dfs(vector<vector<int>> &m, int i, int j)
{
    if (i < 0 || i >= m.size() || j < 0 || j >= m[0].size() || m[i][j] == 0)
        return;
    m[i][j] = 0;
    dfs(m, i + 1, j);
    dfs(m, i - 1, j);
    dfs(m, i, j + 1);
    dfs(m, i, j - 1);
}

int solve(vector<vector<int>> &matrix)
{
    int res = 0;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                res++;
                dfs(matrix, i, j);
            }
        }
    }

    return res;
}