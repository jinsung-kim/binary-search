#include "0000-DataStructures.hpp"

void dfs(Tree *n, int currLen, int currSum, int &res, int &resSum)
{
    if (!n)
        return;
    currLen++;
    currSum += n->val;
    if (currLen > res)
    {
        res = currLen;
        resSum = currSum;
    }
    else if (currLen == res && currSum > resSum)
    {
        res = currLen;
        resSum = currSum;
    }
    dfs(n->left, currLen, currSum, res, resSum);
    dfs(n->right, currLen, currSum, res, resSum);
}

int solve(Tree *root)
{
    int res = 0, resSum = 0;
    dfs(root, 0, 0, res, resSum);
    return resSum;
}