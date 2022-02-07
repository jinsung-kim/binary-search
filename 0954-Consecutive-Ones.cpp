#include <vector>

bool solve(vector<int> &nums)
{
    int firstOne = -1; // using as index + flag

    for (int i = 0; i < nums.size(); i++)
    {
        // found first one
        if (firstOne == -1 && nums[i] == 1)
            firstOne = i;
        // no longer allowed to find ones
        else if (firstOne >= 0 && nums[i] != 1)
            firstOne = -2;
        // one that is not connected to the prev chain
        else if (firstOne == -2 && nums[i] == 1)
            return false;
    }

    return true;
}