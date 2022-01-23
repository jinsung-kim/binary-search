#include "0000-DataStructures.hpp"

void dfs(Tree *node, int &res, bool isOnlyChild)
{
    if (isOnlyChild)
    {
        res++;
    }
    else if (!node)
        return;

    if (node->left && !node->right)
        dfs(node->left, res, true);
    else if (node->right && !node->left)
        dfs(node->right, res, true);
    else
    {
        dfs(node->left, res, false);
        dfs(node->right, res, false);
    }
}

int solve(Tree *root)
{
    int res = 0;

    dfs(root, res, false);

    return res;
}