#include <vector>

vector<int> solve(vector<vector<int>> &lists)
{
    vector<int> res;

    for (const vector<int> &list : lists)
    {
        for (int elem : list)
            res.push_back(elem);
    }

    sort(res.begin(), res.end());

    return res;
}