int cb(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

vector<int> solve(vector<int> &nums)
{
    sort(nums.begin(), nums.end(), [](int a, int b)
         {
        int ba = cb(a), bb = cb(b);
        if (ba == bb) return a < b;
        return ba < bb; });

    return nums;
}