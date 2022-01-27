#include <vector>

vector<int> solve(vector<int> &nums)
{

    // no fun version O(nlogn)
    /*
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = nums[i] * nums[i];
    }

    sort(nums.begin(), nums.end());

    return nums;
    */

    // O(n) version using two pointer
    vector<int> res(nums.size(), 0);

    int l = 0, r = nums.size() - 1, curr = res.size() - 1;

    while (l <= r)
    {
        int left = nums[l] * nums[l], right = nums[r] * nums[r];
        if (left < right)
        {
            res[curr] = right;
            r--;
        }
        else
        {
            res[curr] = left;
            l++;
        }
        curr--;
    }

    return res;
}