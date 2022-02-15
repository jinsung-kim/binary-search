bool solve(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    /*
    // r1 - c1 == r2 - c2
    unordered_map<int, int> map;

    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (map.find(r - c) == map.end())
                map[r - c] = matrix[r][c];
            else if (map[r - c] != matrix[r][c]) return false;
        }
    }

    return true;
    */
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (matrix[i][j] != matrix[i + 1][j + 1])
                return false;
        }
    }
    return true;
}