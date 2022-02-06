#include <unordered_set>
#include <vector>

bool solve(vector<vector<int>> &votes)
{
    unordered_set<int> voters;

    for (auto v : votes)
    {
        if (voters.find(v[1]) != voters.end())
            return true;
        voters.insert(v[1]);
    }

    return false;
}