#include <vector>

int solve(vector<int> &nums)
{
    int res = 0;

    vector<int> s = nums;
    sort(s.begin(), s.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == s[i])
            res++;
    }

    return res;
}