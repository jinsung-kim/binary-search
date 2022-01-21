#include <vector>
#include <unordered_map>
#include <unordered_set>

bool solve(vector<int> &nums)
{
    unordered_map<int, int> occ;
    unordered_set<int> uniq;

    for (int n : nums)
        occ[n]++;

    for (auto iter = occ.begin(); iter != occ.end(); iter++)
    {
        if (uniq.find(iter->second) != uniq.end())
            return false;
        uniq.insert(iter->second);
    }

    return true;
}