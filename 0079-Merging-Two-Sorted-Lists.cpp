#include <vector>

vector<int> solve(vector<int> &a, vector<int> &b)
{
    vector<int> res(a.size() + b.size(), 0);

    int i = 0, j = 0, curr = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            res[curr] = a[i];
            curr++, i++;
        }
        else
        {
            res[curr] = b[j];
            curr++, j++;
        }
    }

    while (i < a.size())
        res[curr++] = a[i++];
    while (j < b.size())
        res[curr++] = b[j++];

    return res;
}