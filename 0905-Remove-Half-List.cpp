#include <unordered_map>
#include <vector>

int solve(vector<int> &nums)
{

    unordered_map<int, int> m;
    for (int n : nums)
        ++m[n];

    // get unique
    vector<int> unq;
    for (auto iter : m)
        unq.push_back(iter.second);
    // sort by freq -> greater in front
    sort(unq.begin(), unq.end(), greater<int>());

    int res = 0, target = nums.size() / 2, curr = 0;
    if (nums.size() % 2)
        target++; // if odd (at least half)

    for (int i = 0; i < unq.size(); i++)
    {
        if (curr >= target)
            return res;
        curr += unq[i];
        res++;
    }

    return res;
}