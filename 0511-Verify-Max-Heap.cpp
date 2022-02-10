bool solve(vector<int> &nums)
{
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        int left = 2 * i + 1, right = 2 * i + 2;
        // Seen it all
        if (left >= size)
            return true;
        if (left < size && nums[i] < nums[left])
            return false;
        if (right < size && nums[i] < nums[right])
            return false;
    }

    return true;
}