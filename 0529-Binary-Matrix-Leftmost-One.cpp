#include <vector>

int binarySearch(const vector<int> &m)
{
    int l = 0, r = m.size() - 1, mid = -1;

    while (l < r)
    {
        mid = l + (r - l) / 2;
        if (m[mid] == 1)
            r = mid;
        else if (m[mid] == 0)
            l = mid + 1;
    }
    if (m[l] == 1)
        return l;
    else
        return -1;
}

int solve(vector<vector<int>> &matrix)
{
    int res = INT_MAX, c = 0;

    for (size_t i = 0; i < matrix.size(); i++)
    {
        int ind = binarySearch(matrix[i]);
        if (ind == -1)
            c++;
        else
            res = min(res, ind);
    }

    if (c == matrix.size())
        return -1;
    else
        return res;
}