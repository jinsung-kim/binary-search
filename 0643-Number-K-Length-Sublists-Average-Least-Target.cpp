#include <vector>

bool calc(double curr, int k, int target)
{
    return (curr / double(k)) >= double(target);
}

int solve(vector<int> &nums, int k, int target)
{
    int len = nums.size(), res = 0;
    double curr = 0;

    for (int i = 0; i < k - 1; i++)
        curr += nums[i];

    int l = 0, r = k - 1;
    while (r < len)
    {
        curr += nums[r];
        if (calc(curr, k, target))
            res++;
        curr -= nums[l];
        l++, r++;
    }

    return res;
}