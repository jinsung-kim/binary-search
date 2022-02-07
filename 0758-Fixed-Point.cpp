#include <vector>

int solve(vector<int> &nums)
{
    // take out negatives
    int ind = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 0)
        {
            ind = i;
            break;
        }
    }

    for (int i = ind; i < nums.size(); i++)
    {
        if (nums[i] == i)
            return i;
    }

    return -1;
}