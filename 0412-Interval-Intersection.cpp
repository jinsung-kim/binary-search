#include <vector>

vector<int> solve(vector<vector<int>> &intervals)
{
    vector<int> res(2, 0);
    // guaranteed at least one
    res[0] = intervals[0][0];
    res[1] = intervals[0][1];

    for (size_t i = 1; i < intervals.size(); i++)
    {
        res[0] = max(res[0], intervals[i][0]);
        res[1] = min(res[1], intervals[i][1]);
    }

    return res;
}