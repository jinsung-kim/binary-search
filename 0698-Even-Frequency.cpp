bool solve(vector<int> &nums)
{
    int xortest = 0, pos;

    for (size_t i = 0; i < nums.size(); i++)
    {
        pos = 1 << nums[i];
        xortest ^= pos;
    }

    return xortest == 0;
}