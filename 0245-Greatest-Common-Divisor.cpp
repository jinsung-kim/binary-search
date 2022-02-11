int solve(vector<int> &nums)
{
    int res = 1, min = nums[0];
    for (int n : nums)
        if (n < min)
            min = n;
    bool gcd;

    for (int i = 1; i <= min; i++)
    {
        gcd = true;
        for (int n : nums)
        {
            if (n % i)
            {
                gcd = false;
                break;
            }
        }
        if (gcd)
            res = i;
    }

    return res;
}