#include <queue>
#include <vector>

vector<int> solve(vector<int> &nums)
{
    queue<int> po, pe;     // position
    vector<int> odd, even; // actual nums

    for (int i = 0; i < nums.size(); i++)
    {
        int curr = nums[i];
        if (nums[i] % 2)
        {
            po.push(i);
            odd.push_back(curr);
        }
        else
        {
            pe.push(i);
            even.push_back(curr);
        }
    }

    // now have all of the positioning
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end());

    for (int i = 0; i < odd.size(); i++)
    {
        int ind = po.front();
        po.pop();
        nums[ind] = odd[i];
    }

    for (int i = 0; i < even.size(); i++)
    {
        int ind = pe.front();
        pe.pop();
        nums[ind] = even[i];
    }

    return nums;
}