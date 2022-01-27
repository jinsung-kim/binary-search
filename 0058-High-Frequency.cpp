#include <unordered_map>
#include <vector>

int solve(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (int n : nums)
        m[n]++;

    int mx = 0;
    for (auto iter = m.begin(); iter != m.end(); iter++)
    {
        if (iter->second > mx)
        {
            mx = iter->second;
        }
    }

    return mx;
}