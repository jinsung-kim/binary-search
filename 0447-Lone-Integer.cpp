#include <unordered_map>

int solve(vector<int> &nums)
{
    unordered_map<int, int> freq;

    for (int n : nums)
        freq[n]++;

    for (auto iter = freq.begin(); iter != freq.end(); iter++)
    {
        if (iter->second == 1)
            return iter->first;
    }

    return -1; // will not reach
}