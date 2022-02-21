int solve(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    // untaken spots (we sub from this every time a boom happens)
    vector<int> boomR(m, 1), boomC(n, 1);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j])
                boomR[i] = boomC[j] = 0;
        }
    }

    return accumulate(boomR.begin(), boomR.end(), 0) * accumulate(boomC.begin(), boomC.end(), 0);
}