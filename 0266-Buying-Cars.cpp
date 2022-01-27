#include <vector>

int solve(vector<int> &prices, int k)
{
    sort(prices.begin(), prices.end());

    int i = 0;
    while (k && i < prices.size())
    {
        if (k >= prices[i])
            k -= prices[i++];
        else
            break;
    }

    return i;
}