#include <vector>

vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    if (matrix.size() == 0)
        return vector<vector<int>>();
    size_t m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> res(n, vector<int>(m, 0));

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            res[j][i] = matrix[i][j];
        }
    }

    return res;
}