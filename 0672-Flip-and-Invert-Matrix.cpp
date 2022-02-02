#include <vector>

vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    for (size_t i = 0; i < matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
        for (size_t j = 0; j < matrix[0].size(); j++)
            matrix[i][j] = matrix[i][j] ? 0 : 1;
    }

    return matrix;
}