bool solve(vector<int> &nums, int k)
{
    int l = 0, r = nums.size() - 1, m;

    while (l < r)
    {
        m = nums[l] + nums[r];
        if (m == k)
            return true;
        else if (m < k)
            l++;
        else
            r--;
    }

    return false;
}