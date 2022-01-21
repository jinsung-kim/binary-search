#include "0000-DataStructures.hpp"

void dfs(Tree *node, int curr, int &res)
{
    if (!node)
    {
        res = max(res, curr);
        return;
    }
    dfs(node->left, curr + node->val, res);
    dfs(node->right, curr + node->val, res);
}

int solve(Tree *root)
{
    int res = 0;
    dfs(root, 0, res);
    return res;
}