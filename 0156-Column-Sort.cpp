vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        vector<int> col;
        for (int j = 0; j < m; j++)
            col.push_back(matrix[j][i]);

        sort(col.begin(), col.end());

        for (int j = 0; j < m; j++)
            matrix[j][i] = col[j];
    }

    return matrix;
}