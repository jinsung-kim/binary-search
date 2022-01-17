#include <vector>

vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    size_t si = matrix.size();
    vector<vector<int>> res(si, vector<int>(si, 0));

    for (size_t i = 0; i < si; i++)
    {
        for (size_t j = 0; j < si; j++)
        {
            res[si - j - 1][i] = matrix[i][j];
        }
    }

    return res;
}