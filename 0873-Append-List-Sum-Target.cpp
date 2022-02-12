int solve(vector<int> &nums, int k, int target)
{
    int cnt = 0;

    target -= accumulate(nums.begin(), nums.end(), 0);

    while (target != 0)
    {
        if (target > 0)
        {
            target -= min(target, k);
        }
        else
        {
            target += min(-1 * target, k);
        }
        cnt++;
    }

    return cnt;
}