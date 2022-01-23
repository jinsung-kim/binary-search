#include <vector>

int solve(vector<int> &piles)
{
    int res = 0;
    sort(piles.begin(), piles.end());

    for (int i = piles.size() - 2, j = 0; i >= 0 && i > j; i -= 2, j++)
    {
        res += piles[i];
    }

    return res;
}