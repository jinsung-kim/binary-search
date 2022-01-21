#include "0000-DataStructures.hpp"

void dfs(Tree *node, bool isRight, int &res)
{
    if (!node)
        return;
    if (isRight && !node->left && !node->right)
        res += node->val;
    dfs(node->left, false, res);
    dfs(node->right, true, res);
}

int solve(Tree *root)
{
    int res = 0;
    dfs(root, false, res);
    return res;
}