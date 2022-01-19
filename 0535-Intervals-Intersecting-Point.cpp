#include <vector>

int solve(vector<vector<int>> &intervals, int point)
{
    int res = 0;

    for (size_t i = 0; i < intervals.size(); i++)
    {
        vector<int> interval = intervals[i];
        if (interval[0] <= point && interval[1] >= point)
            res++;
    }

    return res;
}