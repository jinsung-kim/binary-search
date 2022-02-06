int solve(vector<int> &nums)
{
    // Kadane's Algorithm
    int maxSoFar = nums[0], maxEndingHere = nums[0];

    for (size_t i = 1; i < nums.size(); i++)
    {
        int n = nums[i];
        maxEndingHere = max(n, maxEndingHere + n);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}