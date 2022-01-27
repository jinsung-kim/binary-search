#include <vector>

int endIndex(vector<int> &nums, int num)
{
    int l = 0, r = nums.size() - 1, ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (nums[mid] < num)
            l = mid + 1;
        else if (nums[mid] > num)
            r = mid - 1;
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    return ans;
}

int solve(vector<int> &nums)
{
    int i = 0, res = 0;

    while (i < nums.size())
    {
        res++;
        i = endIndex(nums, nums[i]) + 1;
    }

    return res;
}